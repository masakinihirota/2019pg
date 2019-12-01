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

void merge(A, left, mid, right) {
    n1 = mid - left;
    n2 = right - mid;
    //   L[0...n1], R[0...n2] を生成
    for (i = 0 to n1 - 1) {
        L[i] = A[left + i];
    }
    for (i = 0 to n2 - 1) {
        R[i] = A[mid + i];
    }
    L[n1] = INFTY;
    R[n2] = INFTY;

    i = 0, j = 0;
    for (k = left to right - 1) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i    = i + 1;
        } else {
            A[k] = R[j];
            j    = j + 1;
        }
    }
}

void mergeSort(A, left, right) {
    if (left + 1 < right) {
        mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int n;
    cin >> n;
    int a[n];
    rep(i, n) { cin >> a[i]; }
    merge(a, 0, n / 2, n);

    return 0;
}
