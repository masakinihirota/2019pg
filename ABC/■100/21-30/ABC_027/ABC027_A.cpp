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
    int n = 3;
    int a[n];
    rep(i, n) { cin >> a[i]; }
    // check
    // rep(i, n) {
    //     if (i > 0) cout << " ";
    //     cout << a[i];
    // }

    // 処理
    int ans = 0;
    if (a[0] == a[1]) {
        ans = a[2];
    } else if (a[0] == a[2]) {
        ans = a[1];
    } else {
        ans = a[0];
    }

    // 出力
    cout << ans << endl;

    return 0;
}
