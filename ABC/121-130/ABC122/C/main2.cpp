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

// void func(int N, int Q, string S, vector<int> l, vector<int> r) {}

int main() {
    int N;
    cin >> N;
    int Q;
    cin >> Q;
    string S;
    cin >> S;

    vi l(Q);
    vi r(Q);
    rep(i, Q) {
        cin >> l[i];
        cin >> r[i];
    }

    vi sum(N);
    // サンプル1の場合調べるのは6まで
    // N=8 0-indexxより0-7
    // i=7まで調べるとA[8]='Cが見つかった時に
    // カウントされてしまう。'
    rep(i, N - 1) {
        if (S[i] == 'A' && S[i + 1] == 'C') {
            sum[i + 1] = sum[i] + 1;
        } else {
            sum[i + 1] = sum[i];
        }
    }
    rep(i, Q) { cout << sum[r[i] - 1] - sum[l[i] - 1] << endl; }

    return 0;
}
