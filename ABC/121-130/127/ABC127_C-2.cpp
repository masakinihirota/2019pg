#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int s[m][2];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> s[i][j];
        }
    }

    int minimum = INT_MAX;
    int maximum = 1;
    for (int i = 0; i < m; i++) {
        minimum = min(s[i][1], minimum);
        maximum = max(s[i][0], maximum);
    }

    int ans = minimum - maximum + 1;
    if (ans < 0) {
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }
}
