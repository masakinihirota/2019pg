#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

using ll  = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; i++)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; i++)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; i--)
#define rep1r(i, n) for (int i = ((int)(n)); i >= 1; i--)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back
#define mp make_pair

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

int func(long long N, std::vector<long long> x, std::vector<long long> y,
         std::vector<long long> h) {
    // cout << fixed << setprecision(8);

    rep(cx, 101) {
        rep(cy, 101) {
            int H = 1;
            rep(i, N) {
                if (h[i]) {
                    H = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
                }
            }
            int ok = 1;
            rep(i, N) {
                if (max(H - abs(x[i] - cx) - abs(y[i] - cy), 0) != h[i]) {
                    ok = 0;
                }
                if (ok) {
                    cout << cx << " " << cy << " " << H << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> x(N);
    std::vector<long long> y(N);
    std::vector<long long> h(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &x[i]);
        scanf("%lld", &y[i]);
        scanf("%lld", &h[i]);
    }

    func(N, std::move(x), std::move(y), std::move(h));

    return 0;
}
