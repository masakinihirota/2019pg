#include <math.h>
#include <stdio.h>
#include <algorithm>

#define EPS 1e-10

using namespace std;

int func(double x1, double y1, double x2, double y2, double xp, double yp) {
    double naiseki, norm1, norm2, gaiseki;
    norm1   = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    norm2   = sqrt((xp - x1) * (xp - x1) + (yp - y1) * (yp - y1));
    naiseki = (xp - x1) * (x2 - x1) + (yp - y1) * (y2 - y1);
    gaiseki = (x2 - x1) * (yp - y1) - (xp - x1) * (y2 - y1);
    if (gaiseki > EPS) {
        return 1;
    } else if (gaiseki < -EPS) {
        return -1;
    }

    if (naiseki < -EPS) {
        return 2;
    }

    if (norm1 < norm2) {
        return -2;
    }
    return 0;
}

int main() {
    double x1, x2, x3, x4, y1, y2, y3, y4;
    int    q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3,
              &x4, &y4);

        if (func(x1, y1, x2, y2, x3, y3) * func(x1, y1, x2, y2, x4, y4) <= 0 &&
            func(x3, y3, x4, y4, x1, y1) * func(x3, y3, x4, y4, x2, y2) <= 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}
