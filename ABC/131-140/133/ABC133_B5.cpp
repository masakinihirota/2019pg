#include <iostream>
#include <vector>
#include "cxx-prettyprint/prettyprint.hpp"
// git clone https://github.com/louisdx/cxx-prettyprint.git
// これをカレント行でダウンロードする。

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << vec << std::endl;
}

// #include <iostream>
// #include <vector>
// using std::vector;

// int main() {
//     int n_rows = 5;  // 行数
//     int n_cols = 3;  // 列数
//     int value  = 1;  // 初期値

//     vector<vector<int>> vec(n_rows, vector<int>(n_cols, value));
//     // または
//     // auto vec = vector<vector<int>>(n_rows, vector<int>(n_cols, value));
//     std::cout << vec << std::endl;
// }
