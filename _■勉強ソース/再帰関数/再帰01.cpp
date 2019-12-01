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

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    int s = sum(n - 1);
    return n + s;
}

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力

    // 処理

    // 出力
    cout << sum(2) << endl;   // 0 + 1 + 2 = 3
    cout << sum(3) << endl;   // 0 + 1 + 2 + 3 = 6
    cout << sum(10) << endl;  // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55

    return 0;
}
