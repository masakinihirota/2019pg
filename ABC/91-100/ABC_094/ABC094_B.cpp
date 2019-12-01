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
    // cout << fixed << setprecision(5);

    // 入力
    int n, m, x;
    cin >> n >> m >> x;
    int a[m];
    rep(i, m) { cin >> a[i]; }

    // 処理
    // コスト表を作る
    int b[n + 1] = {};
    for (int i = 0; i < m; i++) {
        b[a[i]] = 1;
    }
    // check
    // rep(i, n + 1) { cout << b[i] << " "; }

    int sumX = 0;
    int minV = INF;
    for (int i = 0; i <= x; i++) {
        sumX += b[i];
    }
    int sumY = 0;
    for (int i = x; i <= n; i++) {
        sumY += b[i];
    }
    // check
    // cout << sumX << " " << sumY << endl;

    // 出力
    cout << min(sumX, sumY) << endl;

    return 0;
}
