#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで

int main() {
    // 入力
    int n;
    cin >> n;

    pair<pair<string, int>, int> da[n];
    string                       re;
    int                          sc;

    rep(i, n) {
        cin >> re >> sc;
        da[i] = make_pair(make_pair(re, -sc), i);
    }

    sort(da, da + n);
    rep(i, n) { cout << da[i].second + 1 << endl; }

    return 0;
}
