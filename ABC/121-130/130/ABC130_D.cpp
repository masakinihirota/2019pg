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
    int n, k;
    cin >> n >> k;
    ll a[n] = {};
    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }
    // check
    // rep(i, n + 1) {
    //     if (i > 0) cout << " ";
    //     cout << a[i];
    // }
    // 処理
    int cnt  = 0;
    ll  sumA = 0;
    for (int i = 1; i < n + 1; i++) {
        // cout << endl;
        for (int j = i; j < n + 1; j++) {
            sumA += a[j];
            if (sumA >= k) {
                // cout << sumA << " ";
                cnt++;
            }
        }
        sumA = 0;
    }

    // 出力
    cout << cnt << endl;

    return 0;
}

// 4 10
// 6 1 2 7
