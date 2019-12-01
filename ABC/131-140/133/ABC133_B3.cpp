#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define ld long double
#define ull unsigned long long int

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  // (i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ret return

typedef pair<int, int>    pii;
typedef vector<int>       vi;
typedef vector<vi>        vii;
typedef vector<long long> vl;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    cout << fixed << setprecision(5);

    // 入力
    int n, d;
    cin >> n >> d;

    vii x(n, vi(d));
    rep(i, n) { rep(j, d) cin >> x[i][j]; }

    // 処理
    int ans = 0;
    rep(i, n) rep(j, i) {  // j<iをすべて調べる
                           // i,n と j,i （jはiまでを調べる）
        int sq = 0;
        rep(k, d) {
            int s = x[i][k] - x[j][k];
            sq += s * s;
        }
        int s = sqrt(sq) + 0.5;
        if (s * s == sq) ans++;  //整数であるかどうかを調べる。
    }
    cout << ans << endl;
    return 0;
}
