#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

using ll    = long long;
using pint  = pair<int, int>;
using plint = pair<ll, ll>;
#define ld long double
#define ull unsigned long long int

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

#define SZ(x) ((int)(x).size())
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

typedef pair<int, int>    pii;
typedef vector<int>       vi;
typedef vector<vi>        vii;
typedef vector<double>    vd;
typedef vector<long long> vll;

// template<class T>bool maxc(T &a, const T &b) { if (a<b) { a=b; return 1; } }
// template<class T>bool minc(T &a, const T &b) { if (b<a) { a=b; return 1; } }

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    string s;
    cin >> s;
    vll l(q);
    vll r(q);
    rep(i, q) {
        cin >> l[i];
        cin >> r[i];
    }

    // 処理
    vector<int> su(n);
    rep(i, n - 1) {
        // ACが存在すれば1なければ0をsu[]に足す。
        su[i + 1] = su[i] + (s[i] == 'A' && s[i + 1] == 'C');
        // cout << (s[i] == 'A' && s[i + 1] == 'C') << " ";
    }
    // cout << endl;
    rep(i, n) { cout << su[i] << " "; }
    cout << endl;

    // 例
    // cout << su[6] << " " << su[2] << su[6] - su[2] << endl;

    // 出力
    // rep(i, q) {
    //     cout << r[i] << "-" << l[i] << " ";
    //     cout << su[r[i] - 1] - su[l[i] - 1] << endl;
    // }

    return 0;
}
