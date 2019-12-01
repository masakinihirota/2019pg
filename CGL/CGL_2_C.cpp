#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    double x1, x2, x3, x4, y1, y2, y3, y4, ansx, ansy;
    int    q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3,
              &x4, &y4);
        ansx = ((x2 - x1) * (y3 * (x4 - x3) + x3 * (y3 - y4)) -
                (x4 - x3) * (y1 * (x2 - x1) + x1 * (y1 - y2))) /
               ((y2 - y1) * (x4 - x3) - (y4 - y3) * (x2 - x1));
        if (x1 != x2) {
            ansy = ((y2 - y1) * ansx + y1 * (x2 - x1) + x1 * (y1 - y2)) /
                   (x2 - x1);
        } else {
            ansy = ((y4 - y3) * ansx + y3 * (x4 - x3) + x3 * (y3 - y4)) /
                   (x4 - x3);
        }
        printf("%.10lf %.10lf\n", ansx, ansy);
    }

    return 0;
}
