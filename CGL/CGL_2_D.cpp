#include <stdio.h>
#include <algorithm>
#include <cfloat>
#include <cmath>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
typedef long long int          ll;
typedef unsigned long long int ull;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000000001
using namespace std;

struct Point {
    double x, y;
};

typedef Point Vector;

struct Segment {
    void set(double x1, double y1, double x2, double y2) {
        p1.x = x1;
        p1.y = y1;
        p2.x = x2;
        p2.y = y2;
    }
    Point p1, p2;
};

typedef Segment Line;

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

double cross(Vector a, Vector b) { return a.x * b.y - a.y * b.x; }

double dot(Vector a, Vector b) { return a.x * b.x + a.y * b.y; }

Point calc_minus(Point a, Point b) {
    Point ret;

    ret.x = a.x - b.x;
    ret.y = a.y - b.y;

    return ret;
}

double calc_len(Vector a) { return sqrt(a.x * a.x + a.y * a.y); }

double getDistanceLP(Line l, Point p) {
    return fabs(cross(calc_minus(l.p2, l.p1), calc_minus(p, l.p1)) /
                calc_len(calc_minus(l.p2, l.p1)));
}

double getDistanceSP(Segment s, Point p) {
    if (dot(calc_minus(s.p2, s.p1), calc_minus(p, s.p1)) < 0.0)
        return calc_len(calc_minus(p, s.p1));
    if (dot(calc_minus(s.p1, s.p2), calc_minus(p, s.p2)) < 0.0)
        return calc_len(calc_minus(p, s.p2));
    return getDistanceLP(s, p);
}

double getDistance(Segment s1, Segment s2) {
    return min(min(getDistanceSP(s1, s2.p1), getDistanceSP(s1, s2.p2)),
               min(getDistanceSP(s2, s1.p1), getDistanceSP(s2, s1.p2)));
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
            printf("0.0000000000\n");
            continue;
        }

        Segment s1, s2;
        s1.set(x1, y1, x2, y2);
        s2.set(x3, y3, x4, y4);

        printf("%.10lf\n", getDistance(s1, s2));
    }

    return 0;
}
