#include <iostream>
using namespace std;

int main() {
    int A, B;
    int X;

    cin >> A >> B;
    if (A == B) {
        X = A + B;
    } else {
        X = max(A, B) * 2 - 1;
    }
    cout << X << endl;
    return 0;
}
