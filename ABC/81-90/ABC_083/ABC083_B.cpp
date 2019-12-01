#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define ld long double
#define ull unsigned long long int

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  // (i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ret return

typedef pair<int, int>    pii;
typedef vector<int>       vi;
typedef vector<vi>        vii;
typedef vector<long long> vl;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    int n, a, b;
    cin >> n >> a >> b;

    // 処理
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        string s;
        int    peace = 0;
        s            = to_string(i);
        if (i < 10) {
            if (i >= a && i <= b) sum += i;
        } else if (i >= 10 && i < 100) {
            for (int k = 0; k < 2; k++) peace += s[k] - '0';
            if (peace >= a && peace <= b) sum += i;
        } else if (i >= 100 && i < 1000) {
            for (int k = 0; k < 3; k++) peace += s[k] - '0';
            if (peace >= a && peace <= b) sum += i;
        } else if (i >= 1000 && i < 10000) {
            for (int k = 0; k < 4; k++) peace += s[k] - '0';
            if (peace >= a && peace <= b) sum += i;
        } else if (i >= 10000) {
            for (int k = 0; k < 5; k++) peace += s[k] - '0';
            if (peace >= a && peace <= b) sum += i;
        }
    }
    // 出力
    cout << sum << endl;

    return 0;
}
