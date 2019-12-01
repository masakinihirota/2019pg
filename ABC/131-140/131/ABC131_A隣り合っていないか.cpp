#include <iostream>
using namespace std;
int main() {
    string S;
    cin >> S;
    for (int i = 0; i < 3; i++) {
        // 0123
        // 01 23 34 がそれぞれ隣り合ってないか調べるだけ
        if (S[i] == S[i + 1]) {
            cout << "Bad" << endl;
            return 0;
        }
    }
    cout << "Good" << endl;
    return 0;
}
