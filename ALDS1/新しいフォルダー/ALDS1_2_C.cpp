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

void bubbleSort(card A[], const int N) {
    int flag = 1;

    for (int i = 0; flag; ++i) {
        flag = 0;

        for (int j = N - 1; i < j; --j)
            if (A[j].value < A[j - 1].value) {
                swap(A[j], A[j - 1]);
                flag = 1;
            }
    }
}

void selectionSort(card A[], const int N) {
    for (int i = 0; i < N; ++i) {
        int min = i;

        // iより後でA[i]より最も小さい値の添字を求める
        for (int j = i; j < N; ++j)
            if (A[j].value < A[min].value) min = j;

        // iとminが異なれば交換
        if (i != min) swap(A[i], A[min]);
    }
}

int main() {
    //入力
    int N;
    scanf("%d%*c", &N);
    card A[N], B[N];  // A:bubbleSort, B:selectionSort
    for (int i = 0; i < N; ++i) {
        scanf("%c%d%*c", &A[i].suit, &A[i].value);
        B[i] = A[i];
    }

    bubbleSort(A, N);
    selectionSort(B, N);

    //バブルソートの結果を出力
    for (int i = 0; i < N; ++i) {
        if (0 < i) printf(" ");
        printf("%c%d", A[i].suit, A[i].value);
    }
    printf("\n");
    printf("Stable\n");

    //選択ソートの結果を出力
    int flag = 1;
    for (int i = 0; i < N; ++i) {
        if (0 < i) printf(" ");
        printf("%c%d", B[i].suit, B[i].value);
        if (!(B[i].suit == A[i].suit && B[i].value == A[i].value)) flag = 0;
    }
    printf("\n");
    if (flag)
        printf("Stable\n");
    else
        printf("Not stable\n");

    return 0;
}
