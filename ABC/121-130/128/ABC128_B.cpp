#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    int n;
    cin >> n;
    string str[n];
    int    b[n], c[n];
    rep(i, n) { cin >> str[i] >> b[i]; }
    rep(i, n) { c[i] = i + 1; }
    // rep(i, n) { cout << str[i] << " " << b[i] << " " << c[i] << endl; }
    string tmps[n];
    int    tmpi[n];

    //文字列ソート
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1 + i; j < n; j++) {
            if (str[i] > str[j]) {
                swap(str[i], str[j]);
                swap(b[i], b[j]);
                swap(c[i], c[j]);
            }
            // tmps[i] = str[i];
            // str[i]  = str[j];
            // str[j]  = tmps[i];
            if (str[i] == str[j] && b[i] < b[j]) {
                swap(str[i], str[j]);
                swap(b[i], b[j]);
                swap(c[i], c[j]);
            }
        }
    }

    // cout << "---" << endl;
    // rep(i, n) { cout << str[i] << " " << b[i] << " " << c[i] << endl; }
    rep(i, n) { cout << c[i] << endl; }

    return 0;
}
