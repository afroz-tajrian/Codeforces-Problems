#include <iostream>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    bool aDiv = (a % k == 0);
    bool bDiv = (b % k == 0);

    if (aDiv && bDiv) {
        cout << "Both" << endl;
    } else if (aDiv) {
        cout << "Memo" << endl;
    } else if (bDiv) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }

    return 0;
}

