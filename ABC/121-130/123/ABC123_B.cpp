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

int mod10(int a) { return a % 10; }
int top(int a) { return ((a + 9) / 10) * 10; }

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    int a[5];
    rep(i, 5) cin >> a[i];
    //余りを入れる
    int b[5];
    rep(i, 5) b[i] = mod10(a[i]);

    int j = 200;  //一つの商品の制約以上の数を番兵にする
                  // （問題文の制約より123を超える数値）
    //余りが一番低い数を検索
    rep(i, 5) {
        if (b[i] != 0) {
            j = min(j, b[i]);
        }
    }

    //余りの最小値が見つからなかったら10にセット
    if (j > 10) {
        j = 10;
    }
    int total = 0;
    rep(i, 5) { total += top(a[i]); }
    // 10を引いて、見つかった最小の余りjを足す。
    total = total - 10 + j;
    cout << total << endl;

    return 0;
}
