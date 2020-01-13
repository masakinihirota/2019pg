#include <bits/stdc++.h>
#include <algorithm>  // sort, unique
#include <iostream>   // std::cout, std::endl;
#include <vector>     // std::vector
using namespace std;
#define all(x) (x).begin(), (x).end()

void printVec(vector<int>& vec) {
    for (auto& e : vec) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {10, 40, 40, 20, 20, 30, 20, 20, 40};
    sort(all(vec));
    vec.erase(unique(all(vec)), vec.end());
    printVec(vec);  // 10 20 30 40
}
