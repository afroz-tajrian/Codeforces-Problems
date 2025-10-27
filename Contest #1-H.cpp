#include <iostream>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    long long multiply = n * k;

    if (multiply % a != 0) {
        cout << "double";
    }
    else {
        long long result = multiply / a;

        if (result >= -2147483648LL && result <= 2147483647LL) {
            cout << "int";
        }
        else {
            cout << "long long";
        }
    }

    return 0;
}

