#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  // (i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで
#define all(x) (x).begin(), (x).end()
#define pb push_back

typedef pair<int, int>    PII;
typedef vector<int>       VI;
typedef vector<VI>        VII;
typedef vector<long long> VL;
typedef long long         ll;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    int n;
    cin >> n;
    VI a(n);
    rep(i, n) { cin >> a[i]; }
    // check
    // rep(i, n) { cout << a[i] << endl; }
    // 処理
    int num1, num2, num3;
    int cnt = 0;
    for (int i = 0; i < n - 2; i++) {
        num1 = a.at(i);
        num2 = a.at(i + 1);
        num3 = a.at(i + 2);
        if ((max({num1, num2, num3}) == num1 &&
             min({num1, num2, num3}) == num3) ||
            (min({num1, num2, num3}) == num1 &&
             max({num1, num2, num3}) == num3)) {
            cnt++;
        }
    }

    // 出力
    cout << cnt << endl;

    return 0;
}
