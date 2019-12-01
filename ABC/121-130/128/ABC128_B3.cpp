#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで

int main() {
    // 入力
    int n;
    cin >> n;
    pair<pair<string, int>, int> pair_data[110];

    rep(i, n) {
        string restaurant;
        int    score;
        cin >> restaurant >> score;
        auto tmp = restaurant;

        // 要素を追加 make_pair(キー、値)
        pair_data[i] = make_pair(make_pair(restaurant, -score), i);
    }

    // 処理
    sort(pair_data, pair_data + n);

    // 出力
    rep(i, n) { cout << pair_data[i].second + 1 << endl; }

    return 0;
}
