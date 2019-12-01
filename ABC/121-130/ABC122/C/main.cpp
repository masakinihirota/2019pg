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
    vector<int> l(Q);
    vector<int> r(Q);
    rep(i, Q) {
        cin >> l[i];
        cin >> r[i];
    }

    // 累積和
    vi ac(N + 1);
    rep(i, N - 1) {
        if (S[i] == 'A' && S[i + 1] == 'C') {
            // 見つかった場合今までの累積+1とする。
            ac[i + 1] = ac[i] + 1;
        } else {
            // 見つからなかったら単に累積だけをする。
            ac[i + 1] = ac[i];
        }
    }
    rep(i, Q) { cout << ac[r[i] - 1] - ac[l[i] - 1] << endl; }

    // func(N, Q, S, std::move(l), std::move(r));
    return 0;
}
