#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct Point {
    bool operator<(const struct Point &arg) const {
        if (y != arg.y) return y < arg.y;
        return x < arg.x;
    };
    double x, y;
};

// true?????????
bool calcGaiseki(Point left, Point base, Point right) {
    double gaiseki = (left.x - base.x) * (right.y - base.y) -
                     (left.y - base.y) * (right.x - base.x);
    if (gaiseki < -0.00000001)
        return false;
    else {
        return true;
    }
}

int main() {
    vector<Point> V, UP, DOWN;

    int    n;
    double x, y;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &x, &y);
        V.push_back(Point());
        V[i].x = x;
        V[i].y = y;
    }

    sort(V.begin(), V.end());

    UP.push_back(V[0]);
    UP.push_back(V[1]);

    DOWN.push_back(V[V.size() - 1]);
    DOWN.push_back(V[V.size() - 2]);

    for (int i = 2; i < V.size(); i++) {
        while (UP.size() > 1 &&
               calcGaiseki(UP[UP.size() - 2], UP[UP.size() - 1], V[i]) == false)
            UP.pop_back();
        UP.push_back(V[i]);
    }

    for (int i = V.size() - 3; i >= 0; i--) {
        while (DOWN.size() > 1 &&
               calcGaiseki(DOWN[DOWN.size() - 2], DOWN[DOWN.size() - 1],
                           V[i]) == false) {
            DOWN.pop_back();
        }
        DOWN.push_back(V[i]);
    }

    printf("%d\n", UP.size() + DOWN.size() - 2);
    for (int i = DOWN.size() - 1; i >= 1; i--)
        printf("%.0lf %.0lf\n", DOWN[i].x, DOWN[i].y);
    for (int i = UP.size() - 1; i >= 1; i--)
        printf("%.0lf %.0lf\n", UP[i].x, UP[i].y);
}
