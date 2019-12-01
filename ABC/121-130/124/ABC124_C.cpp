#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    cin >> s1;

    int count = 0;

    if (s1.size() <= 1) {
        cout << 0 << endl;
    } else {
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s1[i + 1]) {
                if (s1[i + 1] == s1[i + 2]) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
