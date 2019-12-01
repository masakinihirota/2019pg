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

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rep1r(i, n) for (int i = ((int)(n)); i > 0; --i)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back
#define mp make_pair

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

int main() {
    using uint = unsigned int;

    string      in;
    stack<uint> downPoint;  // 下り坂の地点を覚える
    deque<pair<uint, uint> >
        puddles;  // 水たまりの始点位置と面積の組
                  // stackとqueueを使いたいため，dequeで実装
    uint sum = 0;

    // 入力
    cin >> in;

    // 計算
    for (uint i = 0; i < in.size(); i++) {
        if (in[i] == '\\') {
            downPoint.push(i);
        }
        // のぼり坂の場合，総面積の更新と水たまりの更新(結合)を行う．
        // ただし，対応する下り坂がない場合はこの計算を行わない．
        else if (in[i] == '/' && !downPoint.empty()) {
            // 対応する坂との間の部分面積を求める．
            uint j = downPoint.top(), p = i - j;
            downPoint.pop();
            // 総面積に加算する．
            sum += p;

            // 水たまりをまとめる．
            while (!puddles.empty() && puddles.front().first > j) {
                p += puddles.front().second;
                puddles.pop_front();
            }
            puddles.push_front(make_pair(j, p));
        }
    }

    // 出力
    cout << sum << endl;
    cout << puddles.size();
    while (!puddles.empty()) {
        cout << ' ' << puddles.back().second;
        puddles.pop_back();
    }
    cout << endl;

    return 0;
}
