#include <bits/stdc++.h>
using namespace std;
#include <cmath>
#include <iomanip>
#include <iostream>

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

struct Point {
    double x, y;
};

void koch(int n, Point a, Point b) {
    cout << fixed << setprecision(4);

    if (n == 0) return;
    Point  s, t, u;
    double th = PI * 60 / 180;
    s.x       = (2 * a.x + 1 * b.x) / 3;
    s.y       = (2 * a.y + 1 * b.y) / 3;
    t.x       = (1 * a.x + 2 * b.x) / 3;
    t.y       = (1 * a.y + 2 * b.y) / 3;
    u.x       = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
    u.y       = (t.x - s.x) * sin(th) + (t.y - s.y) * cos(th) + s.y;
    koch(n - 1, a, s);
    cout << s.x << " " << s.y << endl;
    koch(n - 1, s, u);
    cout << u.x << " " << u.y << endl;
    koch(n - 1, u, t);
    cout << t.x << " " << t.y << endl;
    koch(n - 1, t, b);
}

int main() {
    cout << fixed << setprecision(4);

    int   n;
    Point a, b;
    cin >> n;
    a.x = 0;
    a.y = 0;
    b.x = 100;
    b.y = 0;
    cout << a.x << " " << a.y << endl;
    koch(n, a, b);
    cout << b.x << " " << b.y << endl;
    return 0;
}
