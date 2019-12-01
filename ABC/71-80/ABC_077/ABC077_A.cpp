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
    string s1, s2, s3, s4;
    cin >> s1 >> s2;

    // 処理
    reverse_copy(s1.begin(), s1.end(), back_inserter(s3));
    reverse_copy(s2.begin(), s2.end(), back_inserter(s4));

    // 出力
    if (s1 == s4 && s2 == s3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
