#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

using ll    = long long;
using pint  = pair<int, int>;
using plint = pair<ll, ll>;
#define ld long double
#define ull unsigned long long int

typedef pair<int, int>    pii;
typedef vector<int>       vi;
typedef vector<vi>        vii;
typedef vector<double>    vd;
typedef vector<long long> vll;

#define FOR(i, begin, end) \
    for (int i = (begin), i##_end_ = (end); i < i##_end_; i++)
#define IFOR(i, begin, end) \
    for (int i = (end)-1, i##_begin_ = (begin); i >= i##_begin_; i--)
#define REP(i, n) FOR(i, 0, n)
#define IREP(i, n) IFOR(i, 0, n)

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rrep1(i, n) for (int i = ((int)(n)); i > 0; --i)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back

// template<class T>bool maxc(T &a, const T &b) { if (a<b) { a=b; return 1; } }
// template<class T>bool minc(T &a, const T &b) { if (b<a) { a=b; return 1; } }

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

#define DEBUG
int main() {
#ifdef suiyuan2009
    freopen("/Users/suiyuan2009/CLionProjects/icpc/input.txt", "r", stdin);
    // freopen("/Users/suiyuan2009/CLionProjects/icpc/output.txt", "w", stdout);
#endif
    int    n, m;
    string s;
    cin >> n >> m >> s;
    vector<int> f = vector<int>(n, 0);
    for (int i = 1; i < n; i++) {
        if (s[i] == 'C' && s[i - 1] == 'A') f[i] = 1;
        f[i] += f[i - 1];
    }
    // cout<<f[3]<<endl;
    while (m--) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        cout << f[y] - f[x] << endl;
    }
    return 0;
}
