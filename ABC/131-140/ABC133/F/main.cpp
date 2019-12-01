#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

using ll = long long;
using pii  = pair<int, int>;
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


void func(long long N, long long Q, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, std::vector<long long> d, std::vector<long long> x, std::vector<long long> y, std::vector<long long> u, std::vector<long long> v){

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> a(N-1);
    std::vector<long long> b(N-1);
    std::vector<long long> c(N-1);
    std::vector<long long> d(N-1);
    for(int i = 0 ; i < N-1 ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
        scanf("%lld",&c[i]);
        scanf("%lld",&d[i]);
    }
    std::vector<long long> x(Q);
    std::vector<long long> y(Q);
    std::vector<long long> u(Q);
    std::vector<long long> v(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&x[i]);
        scanf("%lld",&y[i]);
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
    }
    func(N, Q, std::move(a), std::move(b), std::move(c), std::move(d), std::move(x), std::move(y), std::move(u), std::move(v));
    return 0;
}
