#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    int original1 = A, original2 = B, original3 = C;

    int x = A, y = B, z = C;

    if (x > y) swap(x, y);
    if (y > z) swap(y, z);
    if (x > y) swap(x, y);

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    cout << endl;

    cout << original1 << endl;
    cout << original2 << endl;
    cout << original3 << endl;

    return 0;
}

