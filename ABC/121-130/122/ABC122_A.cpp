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
typedef long long         integer;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    char b;
    cin >> b;

    // 処理
    if (b == 'A') {
        cout << "T" << endl;
    }
    if (b == 'C') {
        cout << "G" << endl;
    }
    if (b == 'G') {
        cout << "C" << endl;
    }
    if (b == 'T') {
        cout << "A" << endl;
    }

    // 出力

    return 0;
}
