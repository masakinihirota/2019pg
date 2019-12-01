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
    int parent, left, right;
};

Node T[MAX];
int  n, D[MAX], H[MAX];

void setDepth(int u, int d) {
    if (u == NIL) return;
    D[u] = d;
    setDepth(T[u].left, d + 1);
    setDepth(T[u].right, d + 1);
}

int setHeight(int u) {
    int h1 = 0, h2 = 0;
    if (T[u].left != NIL) {
        h1 = setHeight(T[u].left) + 1;
    }
    if (T[u].right != NIL) {
        h2 = setHeight(T[u].right) + 1;
    }
    return H[u] = (h1 > h2 ? h1 : h2);
}

int getSibling(int u) {
    if (T[u].parent == NIL) return NIL;
    if (T[T[u].parent].left != u && T[T[u].parent].left != NIL)
        return T[T[u].parent].left;
    if (T[T[u].parent].right != u && T[T[u].parent].right != NIL)
        return T[T[u].parent].right;
    return NIL;
}

void print(int u) {
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].parent << ", ";
    cout << "sibling = " << getSibling(u) << ", ";
    int deg = 0;
    if (T[u].left != NIL) deg++;
    if (T[u].right != NIL) deg++;

    cout << "degree = " << deg << ", ";
    cout << "depth = " << D[u] << ", ";
    cout << "height = " << H[u] << ", ";

    if (T[u].parent == NIL) {
        cout << "root" << endl;
    } else if (T[u].left == NIL && T[u].right == NIL) {
        cout << "leaf" << endl;
    } else {
        cout << "internal node" << endl;
    }
}

// 二分木
int main() {
    ios::sync_with_stdio(false), H[MAX];
    cin.tie(0);

    // cout << fixed << setprecision(5);

    int v, l, r, root = 0;
    cin >> n;
    rep(i, n) { T[i].parent = NIL; }
    rep(i, n) {
        cin >> v >> l >> r;
        T[v].left  = l;
        T[v].right = r;
        if (l != NIL) T[l].parent = v;
        if (r != NIL) T[r].parent = v;
    }

    rep(i, n) {
        if (T[i].parent == NIL) root = i;
    }

    setDepth(root, 0);
    setHeight(root);

    rep(i, n) print(i);

    return 0;
}
