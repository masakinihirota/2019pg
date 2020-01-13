#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main() {
    for (int j = 2; j <= 6; j++) {
        int Factorial = 1;
        for (int i = 2; i <= j; i++) {
            Factorial *= i;
        }
        cout << j << "! = " << Factorial << endl;
    }
    int a = 8 / 2 * (2 + 2);
    cout << a << endl;
}
