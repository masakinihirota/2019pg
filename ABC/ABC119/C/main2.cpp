// 2019年09月09日 (月曜日) 20:35:02
#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

using ll  = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; i++)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; i++)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; i--)
#define rep1r(i, n) for (int i = ((int)(n)); i >= 1; i--)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
// #define SORT(v, n) stable_sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back
#define mp make_pair

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

// void chmin(int &a, int b) {
//     if (a > b) a = b;
// }
// int chmin(int a, int b) {
//     if (a > b) a = b;
//     return a;
// }

int N, A, B, C;
vi  L;

int rec(int i, int a, int b, int c) {
    if (i == N) {
        if (!a || !b || !c) return INF;
        // 終わったのに確定してない場合、解無し。
        // しかし、今回の条件では必ず解が出るようになっている。
        // +-1+10などとしたこねくり回した差分を返す。＝答え
        return abs(a - A) + abs(b - B) + abs(c - C);
    }

    int res = rec(i + 1, a, b, c);

    // 再帰型の全探索
    // 常に最後まで検索して、最小値を記録していく。
    // i番目の最小を決める。
    res = min(res, rec(i + 1, a + L[i], b, c) + (a ? 10 : 0));
    res = min(res, rec(i + 1, a, b + L[i], c) + (b ? 10 : 0));
    res = min(res, rec(i + 1, a, b, c + L[i]) + (c ? 10 : 0));
    // 前半、記録してある最小値。
    // 中 a,b,cのどれかに木を足していく作業。 再帰 DFS
    // 後半、aが存在しているなら２本以上なので+10していく。

    // 何故木が重複しないのか？
    // それは木を１本づつ（iはその場で足すだけ）順番に見ていくので
    // 同じ木を再利用することはない。

    // 必要な魔力を返す。
    return res;
}

int main() {
    cin >> N >> A >> B >> C;
    L.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    cout << rec(0, 0, 0, 0) << endl;

    return 0;
}
