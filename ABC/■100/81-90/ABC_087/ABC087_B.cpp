#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c, X;
    cin >> a >> b >> c >> X;
    int ans = 0;
    rep(i, a + 1) {
        rep(j, b + 1) {
            rep(k, c + 1) {
                int total = 500 * i + 100 * j + 50 * k;
                if (total == X) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
