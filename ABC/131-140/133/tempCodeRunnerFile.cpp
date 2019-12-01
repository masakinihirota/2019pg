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

    int N, D;
    cin >> N >> D;
    vector<vector<int>> X(N, vector<int>(D));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < D; ++j) {
            cin >> X[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int norm = 0;
            for (int k = 0; k < D; ++k) {
                int diff = abs(X[i][k] - X[j][k]);
                norm += diff * diff;
            }
            // check whether norm = k for some k
            bool flag = false;
            for (int k = 0; k <= norm; ++k) {
                if (k * k == norm) {
                    flag = true;
                }
            }
            if (flag) ++ans;
        }
    }
    cout << ans << endl;
}
