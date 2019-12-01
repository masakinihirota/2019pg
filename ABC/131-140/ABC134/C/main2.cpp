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

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // // cout << fixed << setprecision(5);

    int n;
    cin >> n;
    int a[n], s[n];

    rep(i, n) {
        cin >> a[i];
        s[i] = a[i];
    }

    sort(s, s + n, greater<int>());
    rep(i, n) { cout << (s[0] == a[i] ? s[1] : s[0]) << endl; }

    return 0;
}
