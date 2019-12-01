#include <bits/stdc++.h>
using namespace std;

// プロトタイプ宣言 (1.15.関数「細かい話」を参照)
// プロトタイプ宣言が必須 is_evenとis_oddが相互に呼び出しているため
bool is_even(int);
bool is_odd(int);

// nが偶数かを判定する
bool is_even(int n) {
    // ベースケース
    if (n == 0) {
        return true;
    }
    // 再帰ステップ
    return is_odd(n - 1);  // n-1 が奇数なら、nは偶数
}
// nが奇数かを判定する
bool is_odd(int n) {
    // ベースケース
    if (n == 0) {
        return false;
    }
    // 再帰ステップ
    return is_even(n - 1);  // n-1 が偶数なら、nは奇数
}

int main() {
    cout << is_even(4) << endl;  // 1
    cout << is_odd(5) << endl;   // 1
    cout << is_even(3) << endl;  // 0
}
