#include <math.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    double cx, cy, r, x1, x2, y1, y2, slope, cross_x, cross_y, k, div_x, div_y,
        ans1_x, ans1_y, ans2_x, ans2_y;
    int  q;
    bool X_FLG, Y_FLG;

    scanf("%lf %lf %lf", &cx, &cy, &r);
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

        X_FLG = false, Y_FLG = false;

        if (y1 == y2) {
            X_FLG = true;
        } else if (x1 == x2) {
            Y_FLG = true;
        } else {
            slope = (y2 - y1) / (x2 - x1);
        }

        if (X_FLG) {
            cross_x = cx;
            cross_y = y1;
        } else if (Y_FLG) {
            cross_x = x1;
            cross_y = cy;
        } else {
            cross_x =
                (cy * (x2 - x1) * (y2 - y1) + cx * (x2 - x1) * (x2 - x1) -
                 y1 * (y2 - y1) * (x2 - x1) + x1 * (y2 - y1) * (y2 - y1)) /
                ((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
            cross_y = ((x1 - x2) * cross_x + cy * (y2 - y1) + cx * (x2 - x1)) /
                      (y2 - y1);
        }

        k = sqrt(r * r - ((cx - cross_x) * (cx - cross_x) +
                          (cy - cross_y) * (cy - cross_y)));

        if (X_FLG) {
            printf("%.8lf %.8lf %.8lf %.8lf\n", cross_x - k, y1, cross_x + k,
                   y1);
        } else if (Y_FLG) {
            printf("%.8lf %.8lf %.8lf %.8lf\n", x1, cross_y - k, x1,
                   cross_y + k);
        } else {
            div_x = k * (x2 - x1) /
                    (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
            div_y = k * (y2 - y1) /
                    (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));

            ans1_x = cross_x - div_x;
            ans1_y = cross_y - div_y;

            ans2_x = cross_x + div_x;
            ans2_y = cross_y + div_y;

            if (ans1_x < ans2_x) {
                printf("%.8lf %.8lf %.8lf %.8lf\n", ans1_x, ans1_y, ans2_x,
                       ans2_y);
            } else if (fabs(ans1_x - ans2_x) < 0.00000001 && ans1_y <= ans2_y) {
                printf("%.8lf %.8lf %.8lf %.8lf\n", ans1_x, ans1_y, ans2_x,
                       ans2_y);
            } else {
                printf("%.8lf %.8lf %.8lf %.8lf\n", ans2_x, ans2_y, ans1_x,
                       ans1_y);
            }
        }
    }

    return 0;
}
