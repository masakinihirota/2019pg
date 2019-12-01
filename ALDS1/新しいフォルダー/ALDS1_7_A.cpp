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

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rep1r(i, n) for (int i = ((int)(n)); i > 0; --i)

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

#define MAX 100005
#define NIL -1

struct Node {
    int p, l, r;
};

Node T[MAX];
int  n, D[MAX];

void print(int u) {
    int i, c;
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "depth = " << D[u] << ", ";

    if (T[u].p == NIL) {
        cout << "root, ";
    } else if (T[u].l == NIL) {
        cout << "leaf, ";
    } else {
        cout << "internal node, ";
    }
    cout << "[";
    for (i = 0, c = T[u].l; c != NIL; i++, c = T[c].r) {
        if (i) cout << ", ";
        cout << c;
    }
    cout << "]" << endl;
}

int rec(int u, int p) {
    D[u] = p;
    if (T[u].r != NIL) rec(T[u].r, p);
    if (T[u].l != NIL) rec(T[u].l, p + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int i, j, d, v, c, l, r;
    cin >> n;
    rep(i, n) { T[i].p = T[i].l = T[i].r = NIL; }
    rep(i, n) {
        cin >> v >> d;
        rep(j, d) {
            cin >> c;
            if (j == 0)
                T[v].l = c;
            else
                T[l].r = c;
            l      = c;
            T[c].p = v;
        }
    }
    rep(i, n) {
        if (T[i].p == NIL) r = i;
    }

    rec(r, 0);

    rep(i, n) print(i);
    return 0;
}
