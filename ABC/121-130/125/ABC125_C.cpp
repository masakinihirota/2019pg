#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// int gcd(int a, int b) {
//     if (a % b == 0) {
//         return (b);
//     } else {
//         return (gcd(b, a % b));
//     }
// }

int main() {
    int m1 = 1;
    int m2 = 1;

    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    //いつも通りの配列の使い方
    // cout << A[0] << A[1] << A[2] << A[3];

    // cout << __gcd(A[2], A[1]) << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
            } else {
                cout << A[i] << A[i + 1] << endl;
                int m = __gcd(A[i], A[i + 1]);
                // cout << m << endl;

                if (m1 >= m) {
                    m2 = m1;
                    m1 = m;
                }
                // cout << m1 << m2 << endl;
            }
        }
    }

    cout << m1 << endl;

    delete[] A;
    return 0;
}

// int main() { cout << "gcd(6, 20) = " << __gcd(6, 20) << endl; }

// int main() {
//     // xが0以外なら、GCD(y % x, x) の結果を返し、xが0ならyを返します。
//     int GCD(int x, int y) { return x ? GCD(y % x, x) : y; }
//     return 0;
// }
