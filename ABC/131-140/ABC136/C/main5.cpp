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

const string YES = "Yes";
const string NO  = "No";

int func(int n, vll s) {
    ll temp = s[0];
    // for (int i = 1; i < n; i++) {
    rep1(i, n - 1) {
        // 例3 2 1
        // 1回目 ３と２ 3-1出来るので通る。
        // 2回目 maxが３、3-1と１なので通らない。
        // この例でも大きい方の３が選ばれるのでテストケースも通る。
        if (temp - 1 <= s[i]) {
            temp = max(temp, s[i]);
        } else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}

int main() {
    int n;
    cin >> n;
    vll s(n);
    rep(i, n) { cin >> s[i]; }
    func(n, move(s));
    return 0;
}
