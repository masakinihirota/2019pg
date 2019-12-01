#include <bits/stdc++.h>
using namespace std;

// 2019年09月30日 (月曜日) 14:33:44

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

// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	// cout << fixed << setprecision(5);

// 全列挙するプログラム
int main() {
    int N;
    cin >> N;
    for (int s = 0; s < (1 << N); s++) {
        vector<int> ans;
        for (int i = 0; i < N; i++) {
            // 要素iを使うかどうか
            if (s & (1 << i)) ans.push_back(i);
        }

        cout << "{";
        for (int i = 0; i < (int)ans.size(); i++) {
            cout << ans[i] + 1;
            // 途 中 な ら" ," を 出 力
            if (i < (int)ans.size() - 1) cout << ",";
        }
        cout << "}" << endl;
    }
    return 0;
}

// 3 <=入力
// {}
// {1}
// {2}
// {1,2}
// {3}
// {1,3}
// {2,3}
// {1,2,3}
