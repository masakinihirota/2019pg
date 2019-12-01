#include <bits/stdc++.h>
using namespace std;

// a ~ bの総和を計算する (a ≦ b)という前提
int sum_range(int a, int b) {
    // ベースケース
    if (a == b) return a;

    // どっちでもok
    // aを増やす or bを減らす
    return sum_range(a, b - 1) + b;
    // return sum_range(a + 1, b) + a;
}

int main() {
    cout << sum_range(0, 4) << endl;  // 0 + 1 + 2 + 3 + 4 = 10
    cout << sum_range(5, 8) << endl;  // 5 + 6 + 7 + 8 = 26
}
