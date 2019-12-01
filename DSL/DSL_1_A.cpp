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

class DisjointSet {
   public:
    vi rank, p;
    DisjointSet() {}
    DisjointSet(int size) {
        rank.resize(size, 0);
        p.resize(size, 0);
        rep(i, size) makeSet(i);
    }

    void makeSet(int x) {
        p[x]    = x;
        rank[x] = 0;
    }

    bool same(int x, int y) { return findSet(x) == findSet(y); }

    void unite(int x, int y) { link(findSet(x), findSet(y)); }

    void link(int x, int y) {
        if (rank[x] > rank[y]) {
            p[y] = x;
        } else {
            p[x] = y;
            if (rank[x] == rank[y]) {
                rank[y]++;
            }
        }
    }

    int findSet(int x) {
        if (x != p[x]) {
            p[x] = findSet(p[x]);
        }
        return p[x];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int n, a, b, q;
    int t;

    cin >> n >> q;
    DisjointSet ds = DisjointSet(n);

    rep(i, q) {
        cin >> t >> a >> b;
        if (t == 0)
            ds.unite(a, b);
        else if (t == 1) {
            if (ds.same(a, b))
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}
