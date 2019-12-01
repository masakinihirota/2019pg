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

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

struct card {
    char suit;
    int  value;
};

void bubbleSort(card a[], const int n) {
    bool flag = true;
    for (int i = 0; flag; i++) {
        flag = false;
        for (int j = n - 1; i < j; j--)
            if (a[j].value < a[j - 1].value) {
                swap(a[j], a[j - 1]);
                flag = true;
            }
    }
}

void selectionSort(card a[], const int n) {
    for (int i = 0; i < n; i++) {
        int minj = i;
        // iより後でA[i]より最も小さい値の添字を求める
        for (int j = i; j < n; j++)
            if (a[j].value < a[minj].value) minj = j;
        if (i != minj) swap(a[i], a[minj]);
    }
}

int main() {
    int n;
    cin >> n;
    card a[n], b[n];
    rep(i, n) {
        cin >> a[i].suit >> a[i].value;
        b[i] = a[i];
    }

    bubbleSort(a, n);
    selectionSort(b, n);

    //バブルソートの結果を出力
    rep(i, n) {
        if (0 < i) cout << " ";
        cout << a[i].suit << a[i].value;
    }
    cout << endl;
    cout << "Stable" << endl;

    // //選択ソートの結果を出力
    bool flag = true;
    for (int i = 0; i < n; ++i) {
        if (0 < i) cout << " ";
        cout << b[i].suit << b[i].value;
        if (!(b[i].suit == a[i].suit && b[i].value == a[i].value)) flag = false;
    }
    cout << endl;
    if (flag)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;

    return 0;
}
