#vector 入力
int n;
cin >> n;
vector<int> a(n);
rep(i, n) { cin >> a[i]; }
// check
rep(i, n) { cout << a[i] << endl; }
例
2
1
2

#################################

4 つ
// 入力
int n, m;
cin >> n >> m;
//カウント用の vector、0 で初期化
vi cnt(m, 0);
rep(i, n) {
int k;
cin >> k;
rep(j, k) {
int a;
cin >> a;
a--; //わざと配列に合わせる
//カウント
cnt[a]++;
}
}

// 例
n m
k (a1,a2, ,...ak)

3 4
2 1 3
3 1 2 3
2 3 2

#################################

#string 配列入力関数

vector < string > input () {
int n; cin >> n ;
vector < string > W ( n );
for ( int i = 0; i < n ; ++ i ) {
cin >> W [ i ];
}
return W ;
}

main(){
const vector < string > W = input ();
}
例
2
abc
def

#################################

int M;
cin >> M;
vector<int> a(M);
vector<int> b(M);
rep(i, M) cin >> a[i] >> b[i];
// check
rep(i, M) cout << a[i] << b[i] << endl;

例
M が個数
3
3 6
5 7
6 9

#################################

#動的 2 次元配列
// 入力
int n, d;
cin >> n >> d;
vector<vector<int>> table(n, vector<int>(d, 0));
rep(i, n) {
rep(j, d) { cin >> table[i][j]; }
}
//検証
rep(i, n) {
rep(j, d) { cout << table[i][j] << " "; }
cout << "\n";
}

#String 入力から Int の Vector 生成
vector<int> parseInts(string str) {
stringstream x(str);
vector<int> vc;

    while(!x.eof()){
        int i = 0;
        x >> i;
        x.ignore();
        vc.push_back(i);
    }
    return vc;

}

#################################

# 2 次元迷路 入力

int N;
cin >> N;
// マス目の状態を受け取る
vector<string> board(N);
for (int i = 0; i < N; i++) {
cin >> board.at(i);
}

入力例
3
...
##.
##.

#################################

vector<int> vc; // <T>で T 型の vector
int n;
cin >> n;
while(n--) {
int x;
cin >> x;
vc.push_back(x);
}

n = vc.size() / 2;
if(vc[n] == vc.at(n))
cout << n << '\n';

#################################
#################################
#################################
#################################
#################################

#配列の動的確保
int n;
cin >> n;
int arr[n];

コンパイラの独自拡張で、動的に確保出来たりします。
コンテストで使用する処理系によっては動かないこともあります。
AOJ では動きました。

#################################
