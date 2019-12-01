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
    cout << fixed << setprecision(5);

    // 入力
    int n, d;
    cin >> n >> d;
    vector<vector<int>> table(n, vector<int>(d, 0));
    rep(i, n) {
        rep(j, d) { cin >> table[i][j]; }
    }
    //検証
    rep(i, n) {
        rep(j, d) { cout << table[i][j] << " "; }
        cout << "\n";
    }

    // // 処理
    double sumNum = 0;
    int    cnt    = 0;
    rep(i, n) {
        rep(j, d) {
            for (int k = 0; k < d; k++) {  // 2次元 d次元
                for (int l = 0; l < d; l++) {
                    sumNum += pow(table[i + l][j + k], 2);
                }
            }
            double x = sqrt(sumNum);
            if (ceil(x) == floor(x)) {
                cnt++;
            }
        }
    }
    // // 出力
    cout << cnt << endl;

    return 0;
}
