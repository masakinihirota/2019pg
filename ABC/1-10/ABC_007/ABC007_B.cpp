#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

using ll = long long;
#define ld long double
#define ull unsigned long long int

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rrep1(i, n) for (int i = ((int)(n)); i > 0; --i)
#define sz(x) ((int)(x).size())
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで
#define pb push_back

typedef pair<int, int>    pii;
typedef vector<int>       vi;
typedef vector<vi>        vii;
typedef vector<double>    vd;
typedef vector<long long> vl;

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
    string s;
    cin >> s;

    // 処理
    if (s == "a") {
        cout << -1 << endl;
    } else {
        cout << "a" << endl;
    }
    // 出力

    return 0;
}
