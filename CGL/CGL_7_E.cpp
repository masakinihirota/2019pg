#include <stdio.h>
#include <time.h>
#include <algorithm>
#include <cfloat>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
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
    Point(double arg_x, double arg_y) {
        x = arg_x;
        y = arg_y;
    }

    Point() { x = y = 0.0; }

    Point operator+(Point p) { return Point(x + p.x, y + p.y); }
    Point operator-(Point p) { return Point(x - p.x, y - p.y); }
    Point operator*(double a) { return Point(a * x, a * y); }
    Point operator/(double a) { return Point(x / a, y / a); }

    double abs() { return sqrt(norm()); }
    double norm() { return x * x + y * y; }

    bool operator<(const Point &p) const {
        return x != p.x ? x < p.x : y < p.y;
    }

    bool operator==(const Point &p) const {
        return fabs(x - p.x) < EPS && fabs(y - p.y) < EPS;
    }

    double x, y;
};
typedef Point Vector;

struct Circle {
    Point  center;
    double r;
};

double arg(Vector p) { return atan2(p.y, p.x); }

Vector polar(double a, double r) { return Point(cos(r) * a, sin(r) * a); }

double norm(Vector a) { return a.x * a.x + a.y * a.y; }

double abs(Vector a) { return sqrt(norm(a)); }

vector<Point> getCrossPoints(Circle c1, Circle c2) {
    vector<Point> res;

    double d = abs(c1.center - c2.center);
    double a = acos((c1.r * c1.r + d * d - c2.r * c2.r) / (2 * c1.r * d));
    double t = arg(c2.center - c1.center);

    res.push_back(Point(c1.center + polar(c1.r, t + a)));
    res.push_back(Point(c1.center + polar(c1.r, t - a)));

    return res;
}

int main() {
    Circle c1, c2;

    scanf("%lf %lf %lf", &c1.center.x, &c1.center.y, &c1.r);
    scanf("%lf %lf %lf", &c2.center.x, &c2.center.y, &c2.r);

    vector<Point> ans = getCrossPoints(c1, c2);

    if ((ans[0].x > ans[1].x) ||
        (fabs(ans[0].x - ans[1].x) < EPS && ans[0].y > ans[1].y)) {
        swap(ans[0], ans[1]);
    }

    printf("%.10lf %.10lf %.10lf %.10lf\n", ans[0].x, ans[0].y, ans[1].x,
           ans[1].y);

    return 0;
}
