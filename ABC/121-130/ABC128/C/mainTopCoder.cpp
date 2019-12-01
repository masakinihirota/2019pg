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

const long long MOD = 2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int n, m;
    vi  vec[15];
    int w[15];

    // スイッチ 電球
    cin >> n >> m;
    rep(i, m) {
        int a;
        cin >> a;
        rep(j, a) {
            int x;
            cin >> x;
            x--;
            vec[i].push_back(x);
        }
    }

    rep(i, m) cin >> w[i];
    int ans = 0;
    rep(i, (1 << n)) {
        rep(j, m) {
            int x = 0;
            rep(k, vec[j].size()) {
                int a = vec[j][k];
                if (((i >> a) & 1)) x ^= 1;
            }
            if (x != w[j]) goto f;
        }
        ans++;
    f:;
    }
    cout << ans << endl;

    return 0;
}
