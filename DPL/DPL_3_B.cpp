#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

struct Info {
    Info() { left = height = 0; }
    Info(int arg_left, int arg_height) {
        left   = arg_left;
        height = arg_height;
    }
    int left, height;
};

int main() {
    int H, W, max_s, tmp, tmp_h;

    scanf("%d %d", &H, &W);

    int** table = new int*[H + 1];
    for (int i = 0; i < H + 1; i++) {
        table[i] = new int[W + 1];
    }

    for (int i = 0; i < W + 1; i++) table[0][i] = 0;
    for (int i = 0; i < H + 1; i++) table[i][W] = 0;

    stack<Info> S;
    Info        work;

    max_s = 0;

    for (int i = 1; i <= H; i++) {
        for (int k = 0; k < W; k++) {
            scanf("%d", &table[i][k]);
            if (table[i][k] == 0) {
                table[i][k] = table[i - 1][k] + 1;
            } else {
                table[i][k] = 0;
            }
        }

        tmp_h = table[i][0];
        S.push(Info(0, tmp_h));

        for (int k = 1; k < W + 1; k++) {
            if (table[i][k] > tmp_h) {
                S.push(Info(k, table[i][k]));
                tmp_h = table[i][k];
            } else if (table[i][k] == tmp_h) {
            } else {
                while (S.empty() == false && S.top().height >= table[i][k]) {
                    work = S.top();
                    S.pop();
                    tmp   = (k - work.left) * work.height;
                    max_s = (max_s >= tmp) ? max_s : tmp;
                }
                tmp_h = table[i][k];
                S.push(Info(work.left, table[i][k]));
            }
        }
    }

    printf("%d\n", max_s);

    return 0;
}
