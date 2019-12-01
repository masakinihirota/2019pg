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

int func(long long n, std::vector<long long> a) {
    // cout << fixed << setprecision(5);

    // 累積和
    // 左右の端の場合はそのまま記録
    // それ以降のは2つの値のgcdを求めていく
    vll left(n + 1), right(n + 1);
    left[1]  = a[0];
    right[1] = a[n - 1];
    // なぜ１から入れているのか？
    // 累積和はleft[0]に0を入れることが重要な項目の一つ。
    // これは累積和の0と0の差分を取る時に必要となる。
    // なのでleft[1]にa[0]を right[1]にa[n-1]を代入している。
    rep(i, n) {
        left[i + 1]  = gcd(left[i], a[i]);
        right[i + 1] = gcd(right[i], a[n - 1 - i]);
    }

    ll ans = left[n];  //全体の最大公約数
    // ll ans = right[n];  //全体の最大公約数
    // 累積和はsum[i+1]=sum[i]+a[i]が基本
    // 	配列 a に対して累積和 s を求めると、配列 a の区間 [left, right) の総和が
    // s[right] - s[left]
    // で O(1) で求められる
    rep(i, n) {
        ll res;
        if (i == 0)  //左端
            res = right[n - 1];
        else if (i == n - 1)  //右端
            res = left[n - 1];
        else
            res = gcd(left[i], right[n - 1 - i]);
        ans = max(ans, res);
    }
    cout << ans << endl;

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    func(N, std::move(A));
    return 0;
}
