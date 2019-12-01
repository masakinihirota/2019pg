#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int bit[1000000], bit_n;
int sum(int i) {
    int s = 0;
    while (i) {
        s += bit[i];
        i -= i & -i;
    }
    return s;
}
void add(int i, int x) {
    while (i <= bit_n) {
        bit[i] += x;
        i += i & -i;
    }
}

struct data {
    int  time, type, l, r;
    bool operator<(const data &p) const {
        return (time == p.time ? type < p.type : time < p.time);
    }
};
// 1 | add
// 2 - check
// 3 | delete

int           n;
vector<data>  t;
vector<int>   X;
map<int, int> mapx;
int           main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        X.push_back(a);
        X.push_back(c);
        if (a == c) {
            t.push_back((data){min(b, d), 1, a, a});
            t.push_back((data){max(b, d), 3, a, a});
        } else {
            t.push_back((data){b, 2, min(a, c), max(a, c)});
        }
    }
    sort(t.begin(), t.end());
    sort(X.begin(), X.end());
    int c = 2;
    for (int i = 0; i < (int)X.size(); i++)
        if (i == 0 || X[i] != X[i - 1]) mapx[X[i]] = c++;

    bit_n         = n * 2 + 1;
    long long ans = 0;
    for (int i = 0; i < (int)t.size(); i++) {
        data d = t[i];
        d.l = mapx[d.l], d.r = mapx[d.r];
        if (d.type == 1) {
            add(d.l, 1);
        } else if (d.type == 2) {
            long long A = sum(d.r) - sum(d.l - 1);
            ans += A;
        } else if (d.type == 3) {
            add(d.l, -1);
        }
    }
    printf("%lld\n", ans);
    return 0;
}
