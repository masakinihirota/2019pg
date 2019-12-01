//偶数を除外
//ルートで範囲を狭めている

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
typedef long long ll;

bool routeIsPrime(ll num) {
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;  // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main() {
    // cout << is_prime(1) << endl;       // 0
    // cout << is_prime(2) << endl;       // 1
    // cout << is_prime(12) << endl;      // 0
    // cout << is_prime(13) << endl;      // 1
    // cout << is_prime(57) << endl;      // 0
    // cout << routeIsPrime(1) << endl;   // 0
    // cout << routeIsPrime(2) << endl;   // 1
    // cout << routeIsPrime(12) << endl;  // 0
    // cout << routeIsPrime(13) << endl;  // 1
    // cout << routeIsPrime(57) << endl;  // 0

    ll num = 9999943;  //素数

    // QueryPerformanceCounter関数の1秒当たりのカウント数を取得する
    LARGE_INTEGER freq;
    QueryPerformanceFrequency(&freq);
    LARGE_INTEGER start, end;

    //時間計測
    QueryPerformanceCounter(&start);
    // 何かの処理
    {
        cout << routeIsPrime(num) << endl;  // 1
    }
    QueryPerformanceCounter(&end);

    //出力
    double time = static_cast<double>(end.QuadPart - start.QuadPart) * 1000.0 /
                  freq.QuadPart;
    printf("time %lf[ms]\n", time);
}
