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
    int x, y;
    cin >> x >> y;
    int group1[7] = {1, 3, 5, 7, 8, 10, 12};
    int group2[7] = {4, 6, 9, 11, 0, 0, 0};
    int group3[7] = {2, 0, 0, 0, 0, 0, 0};

    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;

    // 処理
    rep(i, 7) {
        if (x == group1[i]) {
            cnt1 = 1;
        }
        if (x == group2[i]) {
            cnt2 = 1;
        }
        if (x == group3[i]) {
            cnt3 = 1;
        }
    }
    rep(i, 7) {
        if (cnt1 == 1 && y == group1[i]) {
            cnt1 = 2;
        }
        if (cnt2 == 1 && y == group2[i]) {
            cnt2 = 2;
        }
        if (cnt3 == 1 && y == group3[i]) {
            cnt3 = 2;
        }
    }

    // 出力
    if (cnt1 == 2 || cnt2 == 2 || cnt3 == 2) {
        cout << "Yes " << endl;
    } else {
        cout << "No " << endl;
    }

    return 0;
}
