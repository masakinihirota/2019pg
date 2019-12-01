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

int main() {
    int n;
    cin >> n;
    int v[n];
    rep(i, n) cin >> v[i];
    int ans0;
    int ans1;

    // どの数字が何個あるか？ 頻度を見る
    map<int, int> mp0;
    map<int, int> mp1;

    int max01 = 0;  // 0基準列で一番多い数字
    int max02 = 0;
    int max11 = 0;  // 1基準列で一番多い数字
    int max12 = 0;

    for (int i = 0; i < n - 1; i += 2) {
        // 偶数を処理
        if (mp0[v[i]] == 0)
            mp0[v[i]] = 1;
        else
            mp0[v[i]]++;

        // 頻度
        if (max01 < mp0[v[i]]) {
            max01 = mp0[v[i]];
            ans0  = v[i];
        } else if (max02 < mp0[v[i]])
            max02 = mp0[v[i]];

        // 奇数を処理
        if (mp1[v[i + 1]] == 0)
            mp1[v[i + 1]] = 1;
        else
            mp1[v[i + 1]]++;

        // 頻度
        if (max11 < mp1[v[i + 1]]) {
            max11 = mp1[v[i + 1]];
            ans1  = v[i + 1];
        } else if (max12 < mp1[v[i + 1]])
            max12 = mp1[v[i + 1]];
    }

    int res = 0;
    if (ans0 == ans1) {
        res = n - max(max01 + max12, max02 + max11);
    } else
        res = n - (max01 + max11);

    cout << res << endl;

    return 0;
}
