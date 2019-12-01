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

const int MAX   = 100;
const int INF   = (1 << 21);
const int white = 0;
const int gray  = 1;
const int black = 2;

int n, m[MAX][MAX];

int prim() {
    int u, minV;
    int d[MAX], p[MAX], color[MAX];
    rep(i, n) {
        d[i]     = INF;
        p[i]     = -1;
        color[i] = white;
    }

    d[0] = 0;
    while (1) {
        minV = INF;
        u    = -1;
        rep(i, n) {
            if (minV > d[i] && color[i] != black) {
                u    = i;
                minV = d[i];
            }
        }
        if (u == -1) break;
        color[u] = black;
        rep(v, n) {
            if (color[v] != black && m[u][v] != INF) {
                if (d[v] > m[u][v]) {
                    d[v]     = m[u][v];
                    p[v]     = u;
                    color[v] = gray;
                }
            }
        }
    }
    int sum = 0;
    rep(i, n) {
        if (p[i] != -1) sum += m[i][p[i]];
    }
    return sum;
}

// 最小全域木
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    cin >> n;
    rep(i, n) {
        rep(j, n) {
            int e;
            cin >> e;
            m[i][j] = (e == -1) ? INF : e;
        }
    }
    cout << prim() << endl;

    return 0;
}
