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

int n, m;

char a[100][100];
char b[100][100];

bool check(int i, int j) {
    for (int x = 0; x < m; ++x) {
        for (int y = 0; y < m; ++y) {
            if (a[i + x][j + y] != b[x][y]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    cin >> n >> m;
    rep(i, n) { cin >> a[i]; }
    rep(i, m) { cin >> b[i]; }

    // 処理
    bool flg = false;
    for (int i = 0; i <= n - m; i++) {
        for (int j = 0; j <= n - m; j++) {
            if (check(i, j)) {
                flg = true;
            }
        }
    }

    // 出力
    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
