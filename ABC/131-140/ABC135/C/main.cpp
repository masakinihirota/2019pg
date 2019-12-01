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

void func(long long n, std::vector<long long> a, std::vector<long long> b) {
    // check
    // cout << N << endl;
    // rep(i, N + 1) {
    //     if (i > 0) cout << " ";
    //     cout << A[i];
    // }
    // cout << endl;
    // rep(i, N) {
    //     if (i > 0) cout << " ";
    //     cout << B[i];
    // }

    int next = 0;
    ll  ans  = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] - a[i] >= 0) {
            next = b[i] - a[i];
            if (a[i + 1] > next) {
                a[i + 1] -= next;
                ans += b[i];
            } else if (a[i + 1] <= next && a[i + 1] >= 0) {
                ans += a[i] + a[i + 1];
                a[i + 1] = 0;
            } else {
                ans += b[i];
            }
        } else {
            ans += b[i];
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    long long N;
    scanf("%lld", &N);
    std::vector<long long> A(N + 1);
    for (int i = 0; i < N + 1; i++) {
        scanf("%lld", &A[i]);
    }
    std::vector<long long> B(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &B[i]);
    }
    func(N, std::move(A), std::move(B));
    return 0;
}
