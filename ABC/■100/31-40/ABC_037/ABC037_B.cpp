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
    int n, q;
    cin >> n >> q;
    int l[q], r[q], t[q];
    rep(i, q) { cin >> l[i] >> r[i] >> t[i]; }
    // rep(i, q) { cout << l[i] << " " << r[i] << " " << t[i] << endl; }

    // 処理
    int a[n] = {};
    for (int i = 0; i < q; i++) {
        int m = l[i];
        int k = r[i];
        while (m <= k) {
            a[m - 1] = t[i];
            m++;
        }
    }

    // 出力
    rep(i, n) { cout << a[i] << endl; }

    return 0;
}
