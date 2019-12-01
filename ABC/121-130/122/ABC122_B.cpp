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
    string S;
    cin >> S;

    int max = 0;

    // 処理
    for (int i = 0; i < S.size(); i++) {
        // cout << S[i];
        int cnt = 0;
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            for (int j = i; j < S.size(); j++) {
                if (S[j] == 'A' || S[j] == 'C' || S[j] == 'G' || S[j] == 'T') {
                    // cout << S[j];
                    cnt++;
                } else {
                    break;
                }
            }
        }
        if (max < cnt) {
            max = cnt;
        }
        // cout << cnt << endl;
    }

    // 出力
    cout << max << endl;

    return 0;
}
