#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで

int main() {
    // 入力
    int n;
    cin >> n;

    pair<pair<string, int>, int> pair_data[n];

    rep(i, n) {
        string re;
        int    sc;
        cin >> re >> sc;
        pair_data[i] = make_pair(make_pair(re, -sc), i);
    }
    sort(pair_data, pair_data + n);
    rep(i, n) { cout << pair_data[i].second + 1 << endl; }

    return 0;
}
