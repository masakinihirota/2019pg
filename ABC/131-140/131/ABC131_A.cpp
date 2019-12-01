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

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);

    // 入力
    int n;
    cin >> n;

    int ary[3] = {};

    ary[0] = n / 1000;
	n=n%1000;
    ary[1] = n / 100;
	n=n%100;
    ary[2] = n / 10;
	n=n%10;
    ary[3] = n;

	// check
    // for (int i = 0; i < 4; i++) {
    //     cout << ary[i] << endl;
    // }

    // 処理 出力
	if (ary[0]==ary[1]||ary[1]==ary[2]||ary[2]==ary[3]){
		cout << "Bad" << endl;
	}else{
		cout << "Good" << endl;
	}



    return 0;
}
