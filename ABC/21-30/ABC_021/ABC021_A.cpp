#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入
    int n;
    cin >> n;
    int cnt8 = 0;
    int cnt4 = 0;
    int cnt2 = 0;
    int cnt1 = 0;

    // 処理
    if (n >= 8) {
        n = n % 8;
        cnt8++;
    } else if (n >= 4) {
        n = n % 4;
        cnt4++;
    } else if (n >= 2) {
        n = n % 2;
        cnt2++;
    } else if (n == 1) {
        cnt1++;
    }

    // 出力
    cout << cnt8 + cnt4 + cnt2 + cnt1 << endl;
    if (cnt8 >= 1) {
        cout << 8 << endl;
    }
    if (cnt4 >= 1) {
        cout << 4 << endl;
    }
    if (cnt2 >= 1) {
        cout << 2 << endl;
    }
    if (cnt1 >= 1) {
        cout << 1 << endl;
    }

    return 0;
}
