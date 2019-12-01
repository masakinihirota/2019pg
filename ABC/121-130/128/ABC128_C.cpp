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

    int N, M;
    cin >> N >> M;
    int k[M];
    int s[M][M];

    rep(j, M) {
        cin >> k[j];
        rep(i, k[j]) { cin >> s[j][i]; }
    }

    int p[M];
    rep(l, M) { cin >> p[l]; }

    // // 仮出力
    // cout << "---" << endl;

    // cout << N << " " << M << endl;

    // rep(j, M) {
    //     cout << k[j] << " ";
    //     rep(i, k[j]) { cout << s[j][i] << " "; }
    //     cout << " " << endl;
    // }
    // rep(k, M) { cout << p[k] << " "; }
    // cout << " " << endl;

    // 処理

    // 出力

    return 0;
}
