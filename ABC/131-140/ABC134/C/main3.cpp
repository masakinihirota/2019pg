// 2019年08月28日 (水曜日) 14:39:33
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
// #define SORT(v, n) stable_sort(v, v + n);
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

    long long n;
    scanf("%lld", &n);
    vll     a(n);
    set<ll> b;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        b.insert(a[i]);
    }

    // check
    // rep(i, n) {
    //     if (i > 0) cout << " ";
    //     cout << a[i];
    // }
    // cout << endl;

    // cout << a[0] << endl;
    // b.erase(a[0]);
    // cout << "begin : " << *b.begin() << endl;
    // auto itr = b.end();
    // itr--;
    // cout << "end : " << *itr << endl;

    rep(i, n) {
        b.erase(a[i]);
        auto itr = b.end();
        itr--;
        cout << *itr << endl;
        b.insert(a[i]);
    }

    // for (auto itr = b.begin(); itr != b.end(); ++itr) {
    //     cout << *itr << " ";  // イテレータの指す先のデータを表示
    // }
    // cout << endl;

    return 0;
}
