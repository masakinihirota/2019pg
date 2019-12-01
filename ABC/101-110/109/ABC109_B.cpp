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
    // int n;
    // cin >> n;
    // vector<string> str(n);
    // rep(i, n) { cin >> str[i]; }
    // rep(i, n) { cout << str[i] << "\n"; }

    //入力
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++) cin >> str[i];

    //処理
    string s, t;
    // t（次の単語）まで調べているのでn-1まで
    for (int i = 0; i < n - 1; i++) {
        s = str[i];      //単語
        t = str[i + 1];  //次の単語
        // 末尾と次の単語の先頭 ||
        // すべての文字列の中からsが複数個含まれているかどうか
        if (s[s.length() - 1] != t[0] || count(all(str), s) != 1)
            return cout << "No" << endl, 0;
    }

    //出力
    cout << "Yes" << endl;
}
