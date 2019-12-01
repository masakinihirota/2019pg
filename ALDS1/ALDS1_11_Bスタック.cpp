#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

using ll  = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; i++)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; i++)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; i--)
#define rep1r(i, n) for (int i = ((int)(n)); i >= 1; i--)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
// #define SORT(v, n) stable_sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back
#define mp make_pair

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

const int N     = 100;
int       white = 0;
int       gray  = 1;
int       black = 2;

int n, m[N][N];
int color[N], d[N], f[N], tt;
int nt[N];

// uに隣接するVを番号順に取得
int next(int u) {
    for (int v = nt[u]; v < n; v++) {
        nt[u] = v + 1;
        if (m[u][v]) return v;
    }
    return -1;
}

// スタックを用いた深さ優先探索
void dfs_visit(int r) {
    rep(i, n) nt[i] = 0;
    stack<int> S;
    S.push(r);        // スタック
    color[r] = gray;  // 色
    d[r]     = ++tt;  // 時間

    while (!S.empty()) {
        int u = S.top();
        int v = next(u);
        if (v != -1) {
            if (color[v] == white) {
                color[v] = gray;
                d[v]     = ++tt;
                S.push(v);
            }

        } else {
            S.pop();
            color[u] = black;
            f[u]     = ++tt;
        }
    }
}

void dfs() {
    // 初期化
    rep(i, n) {
        color[i] = white;
        nt[i]    = 0;
    }
    tt = 0;

    // 未訪問のuを始点として深さ優先探索
    rep(u, n) {
        if (color[u] == white) dfs_visit(u);
    }
    rep(i, n) { cout << i + 1 << " " << d[i] << " " << f[i] << endl; }
}

// スタックによる深さ優先探索
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int u, k, v;

    cin >> n;
    rep(i, n) rep(j, n) m[i][j] = 0;

    rep(i, n) {
        cin >> u >> k;
        u--;
        rep(j, k) {
            cin >> v;
            v--;
            m[u][v] = 1;
        }
    }
    dfs();

    return 0;
}
