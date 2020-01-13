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

    // 入力
    string s1;
    cin >> s1;

    // 処理
    // 1文字消す
    s1 = s1.assign(s1, 0, s1.size() - 1);
    // cout << s1 << endl;

    string s2;
    int    ans = 0;
    bool   flg = false;
    s2         = s1.assign(s1, 0, s1.size() / 2);
    // cout << s2 << endl;
    if (s1 == s2 + s2) {
        ans = s1.size();
        flg = true;
    }
    //偶数にする
    if (s1.size() % 2 != 0) {
        s1 = s1.assign(s1, 0, s1.size() - 1);  // str1[1] から 3 文字を代入
    }
    cout << s1 << endl;
    cout << s2 << endl;

    // for (int i = 0; i < s1.size(); i++) {
    // }

    // 出力

    return 0;
}
