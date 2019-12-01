#include <stdio.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, W;
    scanf("%d %d", &N, &W);

    int w[N], v[N];

    int** dp = new int*[W + 1];
    for (int i = 0; i < W + 1; i++) {
        dp[i] = new int[N + 1];
        for (int k = 0; k < N + 1; k++) dp[i][k] = 0;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &v[i], &w[i]);
    }

    for (int i = N - 1; i >= 0; i--) {
        for (int k = 1; k <= W; k++) {
            if (w[i] <= k) {
                dp[k][i] = max(dp[k][i + 1], dp[k - w[i]][i + 1] + v[i]);
            } else {
                dp[k][i] = dp[k][i + 1];
            }
        }
    }

    printf("%d\n", dp[W][0]);

    return 0;
}
