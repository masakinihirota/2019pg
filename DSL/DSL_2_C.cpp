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

class Node {
   public:
    int location;
    int p, left, right;
    Node() {}
};

class Point {
   public:
    int id, x, y;
    Point() {}
    Point(int id, int x, int y) : id(id), x(x), y(y) {}
    bool operator<(const Point &p) const { return id < p.id; }

    void print() {
        printf("%d\n", id);  // cout より高速なprintf
    }
};

static const int MAX = 1000000;
static const int NIL = -1;

int   N;
Point P[MAX];
Node  T[MAX];
int   number;

bool lessX(const Point &p1, const Point &p2) { return p1.x < p2.x; }
bool lessY(const Point &p1, const Point &p2) { return p1.y < p2.y; }

int makeKDTree(int left, int right, int depth) {
    if (!(left < right)) return NIL;

    int mid = (left + right) / 2;

    int node_id = number++;

    if (depth % 2 == 0) {
        sort(P + left, P + right, lessX);
    } else {
        sort(P + left, P + right, lessY);
    }

    T[node_id].location = mid;
    T[node_id].left     = makeKDTree(left, mid, depth + 1);
    T[node_id].right    = makeKDTree(mid + 1, right, depth + 1);

    return node_id;
}

void find(int node_id, int sx, int tx, int sy, int ty, int depth,
          vector<Point> &ans) {
    int x = P[T[node_id].location].x;
    int y = P[T[node_id].location].y;

    if (sx <= x && x <= tx && sy <= y && y <= ty) {
        ans.push_back(P[T[node_id].location]);
    }

    if (depth % 2 == 0) {
        if (T[node_id].left != NIL) {
            if (sx <= x) find(T[node_id].left, sx, tx, sy, ty, depth + 1, ans);
        }
        if (T[node_id].right != NIL) {
            if (x <= tx) find(T[node_id].right, sx, tx, sy, ty, depth + 1, ans);
        }
    } else {
        if (T[node_id].left != NIL) {
            if (sy <= y) find(T[node_id].left, sx, tx, sy, ty, depth + 1, ans);
        }
        if (T[node_id].right != NIL) {
            if (y <= ty) find(T[node_id].right, sx, tx, sy, ty, depth + 1, ans);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int x, y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);
        P[i]      = Point(i, x, y);
        T[i].left = T[i].right = T[i].p = NIL;
    }

    number = 0;

    int root = makeKDTree(0, N, 0);

    int q;
    scanf("%d", &q);
    int           sx, tx, sy, ty;
    vector<Point> ans;
    for (int i = 0; i < q; i++) {
        scanf("%d %d %d %d", &sx, &tx, &sy, &ty);
        ans.clear();
        find(root, sx, tx, sy, ty, 0, ans);
        sort(ans.begin(), ans.end());
        for (int j = 0; j < ans.size(); j++) {
            ans[j].print();
        }
        printf("\n");
    }

    return 0;
}
