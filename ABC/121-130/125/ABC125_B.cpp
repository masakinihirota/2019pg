#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, V[20], C[20];
    int total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }
    for (int j = 0; j < n; j++) {
        cin >> C[j];
    }

    for (int k = 0; k < n; k++) {
        if ((V[k] - C[k]) >= 0) {
            total += V[k] - C[k];
        }
    }

    cout << total << endl;

    return 0;
}
