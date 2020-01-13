#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <istream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#define rep0(i, n) for (int i = 0; i <= (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
#define REP(i, a, b) for (int i = a; i <= (b); ++i)
#define MOD 10e9 + 7
#define INF 2147483646
#define INFLL 9223372036854775807
typedef long long ll;
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    /*
            　　　  　 ,ﾍ／L──- 、
            　　　   　Lﾆ)r_」=＝= ｲ
            　　 　,ﾍ、i ﾉノλﾉﾊﾉﾍ
            　　   ,'　｀(ﾊﾘ ﾟ ヮﾟﾉi)　',
            　　 .i　　 >〈(つ,i!と)　　i
            　　  vﾍγk´_/___i,ゝﾍノ
            　　　　　 ｀ﾞr_,ｨ_ｧﾞ´
    */
    string s;
    cin >> s;
    int counta = 0;
    int countb = 0;
    rep0(i, (int)s.size() - 1) {
        if (s[i] == '0') {
            counta++;
        } else {
            countb++;
        }
    }
    cout << 2 * min(counta, countb) << endl;
    return 0;
}
