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

int func(long long n, long long a, long long b, long long c,
         std::vector<long long> l) {
    // cout << fixed << setprecision(8);

    bool ansA, ansB, ansC;
    ansA = ansB = ansC = false;

    for (int i = 0; i < l.size(); i++) {
        if (l[i] == a) ansA = true;
        if (l[i] == b) ansB = true;
        if (l[i] == c) ansC = true;
    }

    if (ansA == true && ansB == true && ansC == true) {
        cout << 0 << endl;
        return 0;
    }
    int minA = 0;
	



    return 0;
}

int main() {
    long long N;
    scanf("%lld", &N);
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long C;
    scanf("%lld", &C);
    std::vector<long long> l(N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &l[i]);
    }

    func(N, A, B, C, std::move(l));

    return 0;
}
