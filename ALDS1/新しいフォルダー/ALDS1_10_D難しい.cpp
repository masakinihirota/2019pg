#include <bits/stdc++.h>
using namespace std;
typedef long long    ll;
typedef pair<ll, ll> l_l;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
// const ll mod = 1000000007;5
double dp[505][505];
int    n;
double p[505];
double q[505];
double psum[505];
double qsum[505];

double search(int l, int r) {
    if (dp[l][r] != 0) return dp[l][r];
    if (l == r) {
        return dp[l][r] = 0;
    }
    dp[l][r]     = 1e9;
    double total = qsum[r] - qsum[l - 1] + psum[r] - psum[l];
    for (int x = l + 1; x <= r; x++) {
        double left  = qsum[x - 1] - qsum[l - 1] + psum[x - 1] - psum[l];
        double right = total - left - p[x];
        double now   = (search(l, x - 1) + 1) * (left / total) +
                     (search(x, r) + 1) * (right / total);
        dp[l][r] = min(dp[l][r], now);
    }
    return dp[l][r];
}

int main() {
    cout.precision(10);
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 2; i <= n + 1; i++) cin >> p[i];
    for (int i = 1; i <= n + 1; i++) cin >> q[i];
    for (int i = 1; i <= n + 1; i++) psum[i] = psum[i - 1] + p[i];
    for (int i = i; i <= n + 1; i++) qsum[i] = qsum[i - 1] + q[i];
    cout << 1.0 + search(1, n + 1) << endl;
    return 0;
}
