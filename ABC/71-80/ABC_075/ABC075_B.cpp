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

int  h, w;
char c[55][55];

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool check(int x, int y) {
    return x >= 0 && x < w && y >= 0 && y < h && c[x][y] == '#';
}

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    cin >> h >> w;

    // 処理
    rep(y, h) rep(x, w) cin >> c[x][y];
    rep(y, h) rep(x, w) {
        if (c[x][y] == '#') continue;
        int cnt = 0;
        rep(i, 8) {
            int cx = x + dx[i], cy = y + dy[i];
            if (check(cx, cy)) cnt++;
        }
        c[x][y] = '0' + cnt;
    }

    // 出力
    rep(y, h) {
        rep(x, w) cout << c[x][y];
        cout << endl;
    }

    return 0;
}
