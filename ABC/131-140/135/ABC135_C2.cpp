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

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rep1r(i, n) for (int i = ((int)(n)); i > 0; --i)

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
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);


    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n + 1; i++) {
        cin >> a[i];
    }
    ll b[n];
    rep(i, n) { cin >> b[i]; }

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        ll temp = 0;
        if (b[i] > a[i]) {
            temp = b[i] - a[i];  // 隣を殺せる数
            if (a[i + 1] > temp) {
                sum += a[i] + temp;  // i+1を一部やっつける
                a[i + 1] -= temp;    //一部だけ殺した
            } else {
                sum += a[i] + a[i + 1];  // i+1も全部やっつける
                a[i + 1] = 0;            //全部殺したから0
            }
        } else {          // b<a
            sum += b[i];  // bだけやっつける。隣町は行かない
        }
    }

    cout << sum << endl;

    return 0;
}
