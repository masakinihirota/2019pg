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
    int n, s, t;
    cin >> n >> s >> t;
    int w;
    cin >> w;
    int a[n] = {};
    for (int i = 2; i <= n; i++) {
        cin >> a[i];
    }

    // 処理
    int cnt = 0;
    if (w >= s && w <= t) cnt++;

    for (int j = 2; j <= n; j++) {
        w += a[j];
        if (w >= s && w <= t) {
            cnt++;
        }
    }

    // // 出力
    cout << cnt << endl;

    return 0;
}
