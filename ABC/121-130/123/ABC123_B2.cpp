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

    int a[5];
    int ans = 0, j = 0;
    rep(i, 5) {
        cin >> a[i];
        // ちょうど0なら全部足す
        if (a[i] % 10 == 0) {
            ans += a[i];
        } else {
            // あまりが出る数値は、その差分を足して?0にして合計を出す
            ans = ans + a[i] + 10 - a[i] % 10;
            // (10-余り)の最大値を求める
            j = max(j, 10 - a[i] % 10);
        }
    }
    // 計算によって出された最大の（10－余り）を引く
    cout << ans - j << endl;

    return 0;
}
