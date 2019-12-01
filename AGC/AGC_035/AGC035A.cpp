#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define ld long double
#define ull unsigned long long int

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  // (i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで
#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ret return

typedef pair<int, int>    pii;
typedef vector<int>       vi;
typedef vector<vi>        vii;
typedef vector<long long> vl;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) { cin >> a[i]; }
    // check
    // rep(i, n) { cout << a[i] << " "; }
    // cout << endl;

    // 処理
    // rep(i, n) { a.push_back(a[i]); }
    // rep(i, n * 3) { cout << a[i] << " "; }

    bool flg = false;
    ll   c;
    if (n % 3 == 0) {
        flg = true;
    }

    rep(i, n - 2) {
        c = a[i] ^ a[i + 2];
        if (c == a[i + 1]) {
            flg = true;
        } else {
            flg = false;
            break;
        }
    }

    c = a[a.size() - 1] ^ a[0];
    if (c == a[1]) {
        flg = true;
    } else {
        flg = false;
    }

    // 出力
    if (flg == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    };

    return 0;
}
