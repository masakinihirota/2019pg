#include <cstring>
#include <iostream>
using namespace std;
int a[8][8], f[8], b[8], c[15], d[15];

void search(int n) {
    if (n >= 8) {
        for (int k = 0; k < 8; ++k) {
            for (int j = 0; j < 8; ++j) {
                if (a[k][j])
                    cout << "Q";
                else
                    cout << ".";
            }
            cout << endl;
        }
    } else {
        if (f[n])
            search(n + 1);
        else
            for (int i = 0; i < 8; ++i) {
                if (!b[i] && !c[i + n] && !d[n - i + 7]) {
                    b[i]         = 1;
                    c[i + n]     = 1;
                    d[n - i + 7] = 1;
                    a[n][i]      = 1;
                    search(n + 1);
                    b[i]         = 0;
                    c[i + n]     = 0;
                    a[n][i]      = 0;
                    d[n - i + 7] = 0;
                }
            }
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int v, c1;
        cin >> v >> c1;
        a[v][c1]      = 1;
        b[c1]         = 1;
        f[v]          = 1;
        c[v + c1]     = 1;
        d[v - c1 + 7] = 1;
    }
    search(0);
    return 0;
}
