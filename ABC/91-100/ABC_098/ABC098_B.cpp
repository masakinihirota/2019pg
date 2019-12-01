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

int    n;
string s;
int    x[27], y[27], ans;

inline int cnt() {
    int num = 0;
    for (int i = 0; i < 27; i++) {
        //文字の種類の最大化なので、どちらも１以上あればカウント。
        if (x[i] > 0 && y[i] > 0) num++;
    }
    return num;
}

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    cin >> n >> s;

    // 処理
    // 全体のカウント
    rep(i, n) { x[s[i] - 'a']++; }

    rep(i, n) {
        // Xは右側
        // 全体のカウントからi番目まで存在する文字の数を引く
        x[s[i] - 'a']--;

        // Yは左側
        // Yはiまで存在する文字の数を増やしていく
        y[s[i] - 'a']++;

        // cnt関数に渡して最大値を比較取得する。
        ans = max(ans, cnt());
    }

    // 出力
    cout << ans << endl;

    return 0;
}
