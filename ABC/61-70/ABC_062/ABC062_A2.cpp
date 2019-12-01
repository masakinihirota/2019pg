#include <bits/stdc++.h>
#include <ctype.h>
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
    int x, y;
    cin >> x >> y;
    int group[] = {0, 1, 2, 1, 3, 1, 3, 1, 1, 3, 1, 3, 1};

    // 処理
    // 出力
    cout << (group[x] == group[y] ? "Yes" : "No") << endl;

    return 0;
}
