#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    double left = B * log(A);
    double right = D * log(C);

    if (left > right) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}

