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
    int    q;
    double x1, x2, x3, x4, y1, y2, y3, y4, slope1, slope2, naiseki;

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3,
              &x4, &y4);
        if (x1 == x2 && x3 == x4) {
            printf("2\n");
        } else if (x1 == x2 && x3 != x4) {
            if (y3 == y4)
                printf("1\n");
            else {
                printf("0\n");
            }
        } else if (x1 != x2 && x3 == x4) {
            if (y1 == y2)
                printf("1\n");
            else {
                printf("0\n");
            }
        } else {
            slope1  = (y2 - y1) / (x2 - x1);
            slope2  = (y4 - y3) / (x4 - x3);
            naiseki = (x2 - x1) * (x4 - x3) + (y2 - y1) * (y4 - y3);
            if (fabs(slope1 - slope2) < 0.00000001) {
                printf("2\n");
            } else if (fabs(naiseki) < 0.00000001) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        }
    }

    return 0;
}
