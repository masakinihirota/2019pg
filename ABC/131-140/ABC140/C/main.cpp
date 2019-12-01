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

int func(long long N, std::vector<long long> B) {
    // cout << fixed << setprecision(8);

    // 競プロ参戦記 #63 Second Sum | ABC 140 - Qiita
    // https:  // qiita.com/vain0x/items/7ed6bfde477f0ce479b8
    // Aの最大値の条件を導く
    // 一般化すると
    // A(1) ≤ B(1)
    // A(i) ≤ min(B(i-1), B(i)) (i∈{2, ..., N-1})
    // A(N) ≤ B(N-1)
    // （これを0-indexに合わせるため-1する。）

    ll ans;
    // A[0]を入れる。
    ans = B[0];
    // A[N-1]を足す。
    ans += B[N - 2];
    // A[i]を合計する。
    for (int i = 1; i <= N - 2; i++) {
        ans += min(B[i - 1], B[i]);
    }
    cout << ans << endl;

    return 0;
}

int main() {
    long long N;
    scanf("%lld", &N);
    std::vector<long long> B(N - 1);
    for (int i = 0; i < N - 1; i++) {
        scanf("%lld", &B[i]);
    }

    func(N, std::move(B));

    return 0;
}
