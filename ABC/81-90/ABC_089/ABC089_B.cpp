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
    int n;
    cin >> n;
    char s[n];
    rep(i, n) { cin >> s[i]; }

    // 処理
    int cntP = 0;
    int cntW = 0;
    int cntG = 0;
    int cntY = 0;
    rep(i, n) {
        if (s[i] == 'P') cntP = 1;
        if (s[i] == 'W') cntW = 1;
        if (s[i] == 'G') cntG = 1;
        if (s[i] == 'Y') cntY = 1;
    }
    // 出力
    int cnt = cntP + cntW + cntG + cntY;
    cout << (cnt == 3 ? "Three" : "Four") << endl;

    return 0;
}
