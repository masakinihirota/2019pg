min(a, b)
max(a, b)
swap(a, b)
sort(vec.begin(), vec.end())
reverse(vec.begin(), vec.end())

3 項目の max と min
max({num1, num2, num3})
min({num1, num2, num3})

#選択の min
min(min(p+r,q+r),p+q);
例 3 つの内、1 番目と 2 番めの小さい数の合計
int p,q,r;
std::cin >> p >> q >>r;
int ans=min(min(p+r,q+r),p+q);
std::cout << ans << std::endl;

#3 つの合計から最大値を引く
ans = (P+Q+R)-max(P,max(Q,R));

#sort 関数
sort 関数と reverse 関数の組合せ
sort 関数を使ってから reverse 関数を使うと、大きい順にソートできます。

vector<int> vec = {2, 5, 2, 1};
sort(vec.begin(), vec.end());
reverse(vec.begin(), vec.end());
