#include <iostream>
using namespace std;

int main() {
    char C;
    cin >> C;

    char nextChar;
    if (C == 'z') {
        nextChar = 'a';
    } else {
        nextChar = C + 1;
    }

    cout << nextChar << endl;

    return 0;
}

