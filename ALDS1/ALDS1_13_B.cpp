#include <bits/stdc++.h>
using namespace std;

int Y[4] = {-1, 0, 1, 0};
int X[4] = {0, 1, 0, -1};

bool in(int a, int b) {
    if (a < 0 || b < 0 || 3 <= a || 3 <= b) return false;
    return true;
}

int main() {
    int    a;
    string start = "", goal = "123456780";

    for (int i = 0; i < 9; i++) {
        cin >> a;
        start += (a + '0');
    }

    queue<string>    q;
    map<string, int> mp;
    mp[start] = 0;
    q.push(start);
    while (!q.empty()) {
        string u = q.front();
        q.pop();
        int s = -1, cost = mp[u];
        if (u == goal) {
            cout << mp[u] << endl;
            break;
        }

        for (int i = 0; i < u.length(); i++) {
            if (u[i] == '0') s = i;
        }

        int y = s / 3, x = s % 3;

        for (int i = 0; i < 4; i++) {
            int ny = y + Y[i], nx = x + X[i];
            if (!in(ny, nx)) continue;
            int    index = ny * 3 + nx;
            string t     = u;
            swap(t[s], t[index]);
            if (mp.find(t) == mp.end()) {
                mp[t] = cost + 1;
                q.push(t);
            }
        }
    }
    return 0;
}