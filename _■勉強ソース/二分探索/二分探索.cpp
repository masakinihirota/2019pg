#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

int binarySearch(vector<int> table, int item);

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    int ans = -1;

    vector<int> table{1, 3, 5, 7, 9};

    // 処理
    ans = binarySearch(table, 0);
    cout << ans << endl;
    ans = binarySearch(table, 1);
    cout << ans << endl;
    ans = binarySearch(table, 2);
    cout << ans << endl;
    ans = binarySearch(table, 3);
    cout << ans << endl;
    ans = binarySearch(table, 4);
    cout << ans << endl;
    ans = binarySearch(table, 5);
    cout << ans << endl;

    // 出力

    return 0;
}

int binarySearch(vector<int> table, int item) {
    int low  = 0;
    int high = table.size() - 1;
    while (low <= high) {
        int mid   = (low + high) / 2;
        int guess = table[mid];
        cout << "In loop  ";

        if (guess == item) {
            return mid;
        } else if (guess > item) {
            high = mid - 1;
        } else if (guess < item) {
            low = mid + 1;
        }
    }

    return -1;
}
