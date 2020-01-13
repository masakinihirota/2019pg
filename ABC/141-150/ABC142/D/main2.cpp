#include "bits/stdc++.h"
using namespace std;

#define int long long
typedef pair<int, int> P;
#define mod 1000000007
#define INF (1LL << 60)

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define YES puts("YES")
#define Yes puts("Yes")
#define NO puts("NO")
#define No puts("No")
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

// 素因数分解
vector<pair<int, int> > prime_factorize(int n) {
    vector<pair<int, int> > res;
    for (int p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) {
            ++num;
            n /= p;
        }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}

signed main() {
    int A, B;
    cin >> A >> B;
    int g = gcd(A, B);

    vector<P> r = prime_factorize(g);

    cout << r.size() + 1 << endl;

    return 0;
}
