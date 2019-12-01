#include <bits/stdc++.h>
using namespace std;

// dataのi番目以降の要素を逆順にした配列を返す
vector<int> reverse_array_from_i(vector<int> &data, int i) {
    // for (int i = 0; i < data.size(); i++) {
    //     cout << data.at(i) << " ";
    // }
    // cout << endl;

    // ベースケース
    if (i >= data.size()) {
        vector<int> empty_array(0);  // 要素数0の配列 ここで新しい配列を設定
        //ここに到達して、初めて逆順の配列を作り始める。
        // 空の配列を返すのは逆順の配列を作るため
        return empty_array;
    }

    // 再帰ステップ
    vector<int> tmp = reverse_array_from_i(
        data, i + 1);  // dataのi+1番目以降の要素を逆順にした配列を得る
    // for (int i = 0; i < tmp.size(); i++) {
    //     // cout << tmp.at(i) << " ";
    // }
    tmp.push_back(data.at(i));  // 末尾にdataのi番目の要素を追加
    // cout << endl;

    return tmp;
}

// 配列を逆順にしたものを返す
// 第二引数は添字
vector<int> reverse_array(vector<int> &data) {
    return reverse_array_from_i(data, 0);
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = reverse_array(a);
    for (int i = 0; i < b.size(); i++) {
        cout << b.at(i) << " ";
    }
}
