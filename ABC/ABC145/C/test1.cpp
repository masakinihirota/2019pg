#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    vi v;
    v = {1, 2, 3};

    do {
        for (int i = 0; i < 3; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
}
