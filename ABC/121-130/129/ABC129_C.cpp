#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    // rep(i, m) {
    //     if (i > 0) cout << " ";
    //     cout << a[i];
    // }

    // 処理
    bool flg = true;
    int  ans = -1;
    int  cnt = 0;

    // 連続値判定
    for (int i = 1; i < m; i++) {
        if (a[i - 1] + 1 == a[i]) {
            flg = false;
            cnt++;
            ans = 0;
            break;
        }
    }

    // 階段処理
    // フィボナッチで求める
    int f0 = 0;
    int f1 = 1;
    int f2;
    if (flg == true) {
        for (int i = 0; i < n; i++) {
            f2 = f1 + f0;
            f0 = f1;
            f1 = f2;
        }
    }
    // // 出力
    if (n == 1) {
        cout << 1 << endl;
    } else if (n == 2) {
        cout << 2 << endl;
    } else if (flg == true) {
        cout << f1 << endl;

    } else {
        cout << 0 << endl;
    }

    return 0;
}
