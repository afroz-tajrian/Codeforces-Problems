#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    char S, Q;

    cin >> A >> S >> B >> Q >> C;

    int correctResult;

    if (S == '+') {
        correctResult = A + B;
    }
    else if (S == '-') {
        correctResult = A - B;
    }
    else if (S == '*') {
        correctResult = A * B;
    }

    if (correctResult == C) {
        cout << "Yes";
    }
    else {
        cout << correctResult;
    }

    return 0;
}

