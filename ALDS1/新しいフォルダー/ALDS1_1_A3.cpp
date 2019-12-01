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
    int n    = 6;
    int a[6] = {5, 2, 4, 6, 1, 3};
    // cin >> a = {};

    int temp, j;
    rep(i, n) {
        temp = a[i];
        j    = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
        rep(i, n) {
            if (i != 0) cout << " ";
            cout << a[i];
        }
        cout << endl;
        ti
    }

    rep(i, 6) { cout << a[i] << " "; }

    return 0;
}
