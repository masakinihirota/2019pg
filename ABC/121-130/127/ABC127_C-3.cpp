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

    int L[M];
    int R[M];
    rep(i, M) cin >> L[i] >> R[i];
    rep(i, M) cout << L[i] << " " << R[i] << endl;

    //処理

    int mini = 1000000;
    int maxi = 1;

    rep(i, M) {
        maxi = max(L[i], maxi);
        mini = min(R[i], mini);
    }

    int ans = mini - maxi + 1;
    if (ans < 0) {
        cout << 0 << endl;

    } else {
        cout << ans << endl;
    }

    return 0;
}
