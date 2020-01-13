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

    int a, b, c;
    cin >> a >> b >> c;
    int ja, jb, jc;

    // 処理
    array<int, 3> arr = {a, b, c};
    sort(arr.begin(), arr.end());

    if (arr[0] == a) {
        ja = 3;
    } else if (arr[0] == b) {
        jb = 3;
    } else {
        jc = 3;
    }

    if (arr[1] == a) {
        ja = 2;
    } else if (arr[1] == b) {
        jb = 2;
    } else {
        jc = 2;
    }

    if (arr[2] == a) {
        ja = 1;
    } else if (arr[2] == b) {
        jb = 1;
    } else {
        jc = 1;
    }

    // 出力
    cout << ja << endl;
    cout << jb << endl;
    cout << jc << endl;

    return 0;
}
