#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    int N, A;
    cin >> N >> A;

    // 処理
    int L = A;          //一番左のりんごの味
    int R = A + N - 1;  //一番右のりんごの味

    int eat;
    if (R <= 0)  //範囲を考えてから、0以下ならRを食べる
        eat = R;
    else if (L >= 0)  //範囲を考えてから、0以上ならLを食べる
        eat = L;
    else  //残りは0しかない、これは0が範囲内にある場合。この時0のりんごを食べる。
        eat = 0;

    // 範囲内の総和を求める公式
    int answer = (R + L) * (R - L + 1) / 2 - eat;

    // 出力
    cout << answer << endl;

    return 0;
}
