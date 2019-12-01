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
    int n;
    cin >> n;
    int W[n];
    for (int i = 0; i < n; i++) {
        cin >> W[i];
    }

    // 処理
    int s1           = 0;
    int s2           = 0;
    int sumTotal     = 0;
    ll  minimumValue = LLONG_MAX;

    // 総和を求める
    for (int i = 0; i < n; i++) {
        sumTotal += W[i];
    }
    // cout << sumTotal << endl;
    for (int i = 0; i < n; i++) {
        s1 += W[i];
        s2 = sumTotal - s1;
        if (minimumValue > abs(s1 - s2)) {
            minimumValue = abs(s1 - s2);
        }
    }

    // 出力
    cout << minimumValue << endl;

    return 0;
}
