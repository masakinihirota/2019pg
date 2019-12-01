#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)  // (i, 10) i=0～i=9まで
#define repr(i, n) for (int i = n; i >= 0; i--)   // (i, 10) i=10～i=0まで
#define FOR(i, m, n) for (int i = m; i < n; i++)  // (i, 3, 10) i=3～i=9まで
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

#define pb push_back
#define ret return

typedef pair<int, int>    pii;
typedef vector<int>       vi;
typedef vector<vi>        vii;
typedef vector<long long> vl;
typedef long long         ll;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

vi reverse_tmp(vi &data, int i) {
    if (i >= sz(data)) {
        vi  empty(0);
        ret empty;
    }
    vi tmp = reverse_tmp(data, i + 1);
    tmp.pb(data.at(i));
    ret tmp;
}

vi reverse(vi &data) { ret reverse_tmp(data, 0); }

int main() {
    vi a = {1, 2, 3, 4, 5};
    vi b = reverse(a);
    for (int i = 0; i < b.size(); i++) {
        cout << b.at(i) << " ";
    }
    ret 0;
}
