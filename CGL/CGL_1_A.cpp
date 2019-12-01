#include <math.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    double x1, x2, xp, y1, y2, yp, slope, ansx, ansy;
    int    q;
    bool   X_FLG = false, Y_FLG = false;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    scanf("%d", &q);

    if (y1 == y2) {
        X_FLG = true;
    } else if (x1 == x2) {
        Y_FLG = true;
    } else {
        slope = (y2 - y1) / (x2 - x1);
    }

    for (int i = 0; i < q; i++) {
        scanf("%lf %lf", &xp, &yp);
        if (X_FLG) {
            printf("%.10lf %.10lf\n", xp, y1);
        } else if (Y_FLG) {
            printf("%.10lf %.10lf\n", x1, yp);
        } else {
            ansx = (yp * (x2 - x1) * (y2 - y1) + xp * (x2 - x1) * (x2 - x1) -
                    y1 * (y2 - y1) * (x2 - x1) + x1 * (y2 - y1) * (y2 - y1)) /
                   ((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
            ansy = ((x1 - x2) * ansx + yp * (y2 - y1) + xp * (x2 - x1)) /
                   (y2 - y1);
            printf("%.10lf %.10lf\n", ansx, ansy);
        }
    }

    return 0;
}
