#include <bits/stdc++.h>
using namespace std;
#define N 1050

// int func(string X, string Y) {
int func() {
    int c[N + 1][N + 1];
    // int m    = X.size();
    // int n    = Y.size();
    int maxV = 0;
    // cout << X << " " << Y << endl;

    // X        = ' ' + X;
    // Y        = ' ' + Y;
    // for (int i = 0; i <= m; i++) c[i][0] = 0;
    // for (int j = 1; j <= n; j++) c[0][j] = 0;
    // for (int i = 1; i <= m; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (X[i] == Y[j])
    //             c[i][j] = c[i - 1][j - 1] + 1;
    //         else
    //             c[i][j] = max(c[i - 1][j], c[i][j - 1]);
    //         maxl = max(maxl, c[i][j]);
    //     }
    // }
    return maxV;
}
int main() {
    int    q;
    string a, b;
    cin >> q;
    while (q--) {
        cin >> a >> b;
        cout << a << " " << b << endl;

        // cout << func(a, b) << endl;
        cout << func() << endl;
    }
    return 0;
}
