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
const int INFTY = (1 << 21);

int n, M[N][N];
int d[N];  // 距離で訪問状態(color)を管理する。

void bfs(int s) {
    queue<int> q;  //標準ライブラリのqueueを使用。
    q.push(s);
    rep(i, n) d[i] = INFTY;
    d[s]           = 0;
    int u;
    while (!q.empty()) {
        u = q.front();
        q.pop();
        rep(v, n) {
            if (M[u][v] == 0) continue;
            if (d[v] != INFTY) continue;
            d[v] = d[u] + 1;
            q.push(v);
        }
    }
    rep(i, n) {
        cout << i + 1 << " " << ((d[i] == INFTY) ? (-1) : d[i]) << endl;
    }
}

// 幅優先探索
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int u, k, v;
    cin >> n;
    rep(i, n) { rep(j, n) M[i][j] = 0; }
    rep(i, n) {
        cin >> u >> k;
        u--;
        rep(j, k) {
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    bfs(0);

    return 0;
}
