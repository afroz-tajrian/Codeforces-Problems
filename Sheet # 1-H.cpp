#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;

    double result = A / B;

    cout << "floor " << A << " / " << B << " = " << (int)floor(result) << "\n";
    cout << "ceil " << A << " / " << B << " = " << (int)ceil(result) << "\n";
    cout << "round " << A << " / " << B << " = " << (int)round(result) << "\n";

    return 0;
}

