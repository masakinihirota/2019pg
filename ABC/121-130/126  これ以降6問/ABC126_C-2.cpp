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
    cout << fixed << setprecision(12);

    int N, K;
    cin >> N >> K;

    double ans = 0;
    for (int i = 1; i <= N; i++) {
        double tmp = 1.0 / N;
        int    now = i;
        while (now < K) {
            now *= 2;
            tmp /= 2;
        }

        ans += tmp;
    }
    cout << ans << "\n";

    return 0;
}
