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

#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

const int MAX   = 10000;
const int INF   = (1 << 20);
const int white = 0;
const int gray  = 1;
const int black = 2;

int                    n;
vector<pair<int, int>> adj[MAX];  // 重み付き有向グラフの隣接リスト表現

int dijkstra() {
    priority_queue<pair<int, int>> pq;
    int                            d[MAX], color[MAX];
    rep(i, n) {
        d[i]     = INF;
        color[i] = white;
    }

    d[0] = 0;
    pq.push(make_pair(0, 0));
    color[0] = gray;

    while (!pq.empty()) {
        pair<int, int> f = pq.top();
        pq.pop();
        int u    = f.second;
        color[u] = black;

        // 最小値を取り出し、それが最短でなければ無視
        if (d[u] < f.first * (-1)) continue;

        rep(j, adj[u].size()) {
            int v = adj[u][j].first;
            if (color[v] == black) continue;
            if (d[v] > d[u] + adj[u][j].second) {
                d[v] = d[u] + adj[u][j].second;
                // priority_queueはデフォルトで大きい値を優先するため-1を掛ける。
                pq.push(make_pair(d[v] * (-1), v));
                color[v] = gray;
            }
        }
    }
    rep(i, n) { cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl; }
}

// 単一始点最短経路 part2
// 二分ヒープ(優先度付きキュー）
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int k, c, u, v;
    cin >> n;
    rep(i, n) {
        cin >> u >> k;
        rep(j, k) {
            cin >> v >> c;
            adj[u].push_back(make_pair(v, c));
        }
    }

    dijkstra();

    return 0;
}
