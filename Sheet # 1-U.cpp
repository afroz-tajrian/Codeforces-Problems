#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    int dotPos = N.find('.');

    if (dotPos == string::npos) {
        cout << "int " << N;
    }
    else {
        string integerPart = N.substr(0, dotPos);
        string decimalPart = N.substr(dotPos + 1);

        bool allZero = true;
        for (char c : decimalPart) {
            if (c != '0') {
                allZero = false;
                break;
            }
        }

        if (allZero) {
            cout << "int " << integerPart;
        }
        else {
            cout << "float " << integerPart << " " << "0." << decimalPart;
        }
    }
    return 0;
}
