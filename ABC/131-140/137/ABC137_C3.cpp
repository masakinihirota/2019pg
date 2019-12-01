#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; i++)
#define all(x) (x).begin(), (x).end()

// TLEになる。
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);
    long long n;
    cin >> n;

    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
        sort(all(s[i]));
        reverse(all(s[i]));
    }

    long long cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (i == j) break;
            if (s[i] == s[j]) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
