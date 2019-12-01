#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
const long long INF = 1LL << 60;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  //(i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで

int main() {
    // cin.tie(0);
    // ios::sync_with_stdio(false);
    // cout << fixed << setprecision(5);
    ll N, M;
    cin >> N >> M;

    vector<ll> L(M);
    vector<ll> R(M);
    rep(i, M) cin >> L[i] >> R[i];

    int ans = 0;
    //処理
    // LとRが重なっている場合のみ通れる。
    // 10^5の2重ループはオーバーフローになる。
    // なので重なってないところを調べて
    // そこを取り除き、あとは数値で判定する。

    rep(i, M) {
        if (L[i] <= L[M - 1] && R[0] >= L[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
