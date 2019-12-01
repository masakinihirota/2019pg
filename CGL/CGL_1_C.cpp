#include <bits/stdc++.h>
using namespace std;
typedef complex<double> P;
#define x real()
#define y imag()

string ccw(P a, P b, P c) {
    P ab = b - a, ac = c - a;
    P k = ac * conj(ab);
    if (k.y > 0) return "COUNTER_CLOCKWISE";
    if (k.y < 0) return "CLOCKWISE";
    if (k.x < 0) return "ONLINE_BACK";
    if (abs(ab) < abs(ac)) return "ONLINE_FRONT";
    return "ON_SEGMENT";
}

int main() {
    double x0, y0, x1, y1, x2, y2;
    cin >> x0 >> y0 >> x1 >> y1;
    P   a(x0, y0);
    P   b(x1, y1);
    int n;
    cin >> n;
    while (n--) {
        cin >> x2 >> y2;
        P c(x2, y2);
        cout << ccw(a, b, c) << endl;
    }
    return 0;
}
