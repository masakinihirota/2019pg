#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; i++)
#define all(x) (x).begin(), (x).end()

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    rep(i, n) {
        string s;
        cin >> s;
        sort(all(s));
        mp[s]++;
    }

    ll ans = 0;
    for (auto& p : mp) {
        int s = p.second;
        ans += (ll)s * (s - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}
