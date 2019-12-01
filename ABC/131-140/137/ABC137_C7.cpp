#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
#include <vector>
const int    MAXN = 5e5 + 10;
const double eps  = 1e-8;
const int    MOD  = 1000000007;
using namespace std;
typedef long long ll;
string            str[100005];

int main() {
    ll n, sum = 1, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        sort(str[i].begin(), str[i].end());
    }
    sort(str, str + n);
    for (int i = 1; i < n; i++) {
        cout << str[i] << endl;
        if (str[i] == str[i - 1])
            sum++;
        else {
            cout << "1:" << sum << " ";
            cout << "3:" << ans << " ";
            ans += sum * (sum - 1) / 2;
            sum = 1;
            cout << "3:" << ans << " ";
        }
    }
    cout << "2:" << sum << " ";

    ans += sum * (sum - 1) / 2;
    cout << ans << endl;
    return 0;
}
