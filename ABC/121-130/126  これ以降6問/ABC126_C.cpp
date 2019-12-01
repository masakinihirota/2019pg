#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);

    double N, K;
    cin >> N >> K;  // 3 10

    ll     s   = 2;
    double ans = 0.0;

    while (true) {
        double x = 0;
        x        = pow(2, s);
        cout << x << "\n";
        if (x >= K) {
            break;
        }
        s++;
    }
    cout << s << "\n";  // K以上の回数

    double p = 0.0;
    for (int i = 1; i <= s; i++) {
        p = pow(0.5, i);
        ans += (1 / N) * p;
    }

    cout << ans << "\n";  //結果：間違い
    return 0;
}
