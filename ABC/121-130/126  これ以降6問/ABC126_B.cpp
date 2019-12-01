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

    int a;
    int b, c;
    cin >> a;

    b = a / 100;
    c = a % 100;

    if (c >= 1 && c <= 12 && b >= 1 && b <= 12) {
        cout << "AMBIGUOUS"
             << "\n";
    } else if (c >= 1 && c <= 12) {
        cout << "YYMM"
             << "\n";
    } else if (b >= 1 && b <= 12) {
        cout << "MMYY"
             << "\n";
    } else {
        cout << "NA"
             << "\n";
    }

    return 0;
}
