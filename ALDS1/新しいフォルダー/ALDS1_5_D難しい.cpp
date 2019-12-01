#include <algorithm>
#include <iostream>
using namespace std;

int       a[200005], t[200005];
long long ans = 0;

void merge(int l, int r) {
    if (l == r) return;
    int m = (l + r) / 2;
    merge(l, m);
    merge(m + 1, r);
    int i = l, j = m + 1, k = l;
    while (i <= m || j <= r) {
        if (j > r || (i <= m && a[i] < a[j]))
            t[k++] = a[i++];
        else {
            t[k++] = a[j++];
            ans += m - i + 1;
        }
    }
    for (int i = l; i <= r; i++) a[i] = t[i];
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    merge(1, n);
    printf("%lld\n", ans);
    return 0;
}
