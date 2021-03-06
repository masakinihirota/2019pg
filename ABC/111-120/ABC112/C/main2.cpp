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

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> vx(N);
    std::vector<long long> vy(N);
    std::vector<long long> vh(N);
    int                    si = -1;
    for (int i = 0; i < N; i++) {
        scanf("%lld", &vx[i]);
        scanf("%lld", &vy[i]);
        scanf("%lld", &vh[i]);
        if (vh[i] > 0) si = i;
    }

    ll resx = -1, resy = -1, resh = -1;
    rep(x, 101) {
        rep(y, 101) {
            ll   h  = vh[si] + abs(x - vx[si]) + abs(y - vy[si]);
            bool ok = true;
            rep(i, N) {
                if (vh[i] > 0 && h - vh[i] != abs(x - vx[i]) + abs(y - vy[i]))
                    ok = false;
                if (vh[i] == 0 && h > abs(x - vx[i]) + abs(y - vy[i]))
                    ok = false;
            }
            if (ok) resx = x, resy = y, resh = h;
        }
    }

    cout << resx << " " << resy << " " << resh << endl;

    return 0;
}
