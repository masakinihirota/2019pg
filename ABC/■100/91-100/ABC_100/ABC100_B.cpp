#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    int d, n;
    cin >> d >> n;

    // 処理
    ll ans = 0;
    if (n == 100) n++;
    if (d == 0) {
        ans = n;
    } else if (d == 1) {
        ans = 100 * n;
    } else if (d == 2) {
        ans = 10000 * n;
    }

    // 出力
    cout << ans << endl;

    return 0;
}
