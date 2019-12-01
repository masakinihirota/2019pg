#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
struct Point {
    double x, y;
};
void koch(int n, Point a, Point b) {
    if (n == 0) return;
    Point  s, t, u;
    double th = acos(-1) * 60.0 / 180.0;
    s.x       = (2.0 * a.x + 1.0 * b.x) / 3.0;
    s.y       = (2.0 * a.y + 1.0 * b.y) / 3.0;
    t.x       = (1.0 * a.x + 2.0 * b.x) / 3.0;
    t.y       = (1.0 * a.y + 2.0 * b.y) / 3.0;
    u.x       = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
    u.y       = (t.x - s.x) * sin(th) + (t.y - s.y) * cos(th) + s.y;
    koch(n - 1, a, s);
    cout << setprecision(8) << s.x << " " << setprecision(8) << s.y << endl;
    koch(n - 1, s, u);
    cout << setprecision(8) << u.x << " " << setprecision(8) << u.y << endl;
    koch(n - 1, u, t);
    cout << setprecision(8) << t.x << " " << setprecision(8) << t.y << endl;
    koch(n - 1, t, b);
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int   n;
    Point a, b;
    cin >> n;
    a.x = 0.0;
    a.y = 0.0;
    b.x = 100.0;
    b.y = 0.0;
    cout.setf(ios::fixed);
    cout << setprecision(8) << a.x << " " << setprecision(8) << a.y << endl;
    koch(n, a, b);
    cout << setprecision(8) << b.x << " " << setprecision(8) << b.y << endl;
    return 0;
}
