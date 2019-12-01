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

class Point {
   public:
    double x, y;

    Point(double x = 0, double y = 0) : x(x), y(y) {}

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
};

typedef Point         Vector;
typedef vector<Point> Polygon;

int num_point, Q;

double norm(Vector a) { return a.x * a.x + a.y * a.y; }

double abs(Vector a) { return sqrt(norm(a)); }

double cross(Vector a, Vector b) { return a.x * b.y - a.y * b.x; }

double dot(Vector a, Vector b) { return a.x * b.x + a.y * b.y; }

Point calc_minus(Point a, Point b) {
    Point ret;

    ret.x = a.x - b.x;
    ret.y = a.y - b.y;

    return ret;
}

/*
 * IN 2
 * ON 1
 * OUT 0
 *
 */
int contains(Polygon g, Point p) {
    int  n = g.size();
    bool x = false;
    for (int i = 0; i < n; i++) {
        Point a = g[i] - p, b = g[(i + 1) % n] - p;
        if (abs(cross(a, b)) < EPS && dot(a, b) < EPS) return 1;
        if (a.y > b.y) swap(a, b);
        if (a.y < EPS && EPS < b.y && cross(a, b) > EPS) x = !x;
    }
    return (x ? 2 : 0);
}

int main() {
    scanf("%d", &num_point);
    Polygon g;

    double x, y;
    for (int loop = 0; loop < num_point; loop++) {
        scanf("%lf %lf", &x, &y);
        g.push_back(Point(x, y));
    }

    scanf("%d", &Q);

    for (int loop = 0; loop < Q; loop++) {
        scanf("%lf %lf", &x, &y);
        printf("%d\n", contains(g, Point(x, y)));
    }

    return 0;
}
