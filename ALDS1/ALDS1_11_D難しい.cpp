#define _CRT_SECURE_NO_DEPRECATE
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
const int         N_MAX = 100000 + 2;
vector<int>       G[N_MAX];
int               n, m;
int               Q;
int               color[N_MAX];

void dfs(int v, int c) {
    color[v] = c;
    int size = G[v].size();
    for (int i = 0; i < size; i++) {
        int to = G[v][i];
        if (!color[to]) dfs(to, c);
    }
}

int main() {
    while (scanf("%d%d", &n, &m) != EOF) {
        memset(color, 0, sizeof(color));
        for (int i = 0; i < n; i++) {
            G[i].clear();
        }
        for (int i = 0; i < m; i++) {
            int from, to;
            scanf("%d%d", &from, &to);
            G[from].push_back(to);
            G[to].push_back(from);
        }
        int c = 1;
        for (int i = 0; i < n; i++) {
            if (!color[i]) {
                dfs(i, c);
                c++;
            }
        }

        scanf("%d", &Q);
        for (int i = 0; i < Q; i++) {
            int from, to;
            scanf("%d%d", &from, &to);
            if (color[from] == color[to])
                puts("yes");
            else
                puts("no");
        }
    }

    return 0;
}
