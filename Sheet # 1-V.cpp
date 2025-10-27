#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool isCorrect = false;

    if (S == '>') {
        isCorrect = (A > B);
    }
    else if (S == '<') {
        isCorrect = (A < B);
    }
    else if (S == '=') {
        isCorrect = (A == B);
    }

    if (isCorrect) {
        cout << "Right";
    } else {
        cout << "Wrong";
    }

    return 0;
}

