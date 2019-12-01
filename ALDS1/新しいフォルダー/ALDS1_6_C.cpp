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

#define MAX 100000
#define SENTINEL 2000000000

struct Card {
    char suit;
    int  value;
};

struct Card L[MAX / 2 + 2], R[MAX / 2 + 2];

// こちらは別の場所を用意する必要がある。
void merge(struct Card A[], int n, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left;
    int n2 = right - mid;
    // LとRにA（元の配列）をコピー
    rep(i, n1) L[i] = A[left + i];
    rep(i, n2) R[i] = A[mid + i];
    // 番兵の設置
    L[n1].value = R[n2].value = SENTINEL;

    i = j = 0;
    for (int k = left; k < right; k++) {
        // LとRどちらを元に戻すか（a[]に入れるか）を比べる。
        if (L[i].value <= R[j].value) {
            A[k] = L[i++];
        } else {
            A[k] = R[j++];
        }
    }
}

void mergeSort(struct Card A[], int n, int left, int right) {
    int mid;
    if (left + 1 < right) {
        // 中央値を決める
        mid = (left + right) / 2;
        // 左を再帰の分割統治でソート
        mergeSort(A, n, left, mid);
        // 右を再帰の分割統治でソート
        mergeSort(A, n, mid, right);
        // 今度は元に戻すために重ね合わせていく
        merge(A, n, left, mid, right);
    }
}

// こちらは別の場所を用意しない。その場で交換
int partition(struct Card A[], int n, int p, int r) {
    int         i, j;
    struct Card t, x;
    x = A[r];
    i = p - 1;
    // 交換していく
    for (j = p; j < r; j++) {
        if (A[j].value <= x.value) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quickSort(struct Card A[], int n, int p, int r) {
    int q;
    // rは番兵、最後になるまで見る
    if (p < r) {
        q = partition(A, n, p, r);
        quickSort(A, n, p, q - 1);
        quickSort(A, n, q + 1, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // cout << fixed << setprecision(5);

    int         n, i, v;
    struct Card A[MAX], B[MAX];
    char        S[10];
    int         stable = 1;

    // 入力処理
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> S >> v;
        A[i].suit = B[i].suit = S[0];
        A[i].value = B[i].value = v;
    }

    // それぞれのソートを実行
    mergeSort(A, n, 0, n);
    quickSort(B, n, 0, n - 1);
    // 安定ソートかの判断を行う。
    for (int i = 0; i < n; i++) {
        if (A[i].suit != B[i].suit) stable = 0;
    }

    if (stable == 1)
        cout << "Stable" << endl;
    else
        cout << "Not stable" << endl;

    for (int i = 0; i < n; i++) {
        cout << B[i].suit << " " << B[i].value << endl;
    }
    return 0;
}
