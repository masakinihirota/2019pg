#include <bits/stdc++.h>
using namespace std;

// 総数を1000000007で割った余り
const long long mod = 1e9 + 7;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; i++)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; i++)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; i--)
#define rep1r(i, n) for (int i = ((int)(n)); i >= 1; i--)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back
#define mp make_pair

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b)
{
	return b ? gcd(b, a % b) : a;
}
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

void printVec(vector<int> &vec)
{
	for (auto &e : vec)
	{
		cout << e << " ";
	}
	cout << endl;
}

bool is_prime(ll n)
{
	switch (n)
	{
	case 0: // fall-through
	case 1:
		return false;
	case 2: // fall-through
	case 3:
		return true;
	} // n > 3 が保証された

	if (n % 2 == 0)
		return false;
	if (n % 3 == 0)
		return false;
	// 2と3の倍数でないので6の倍数ではないことが保証された

	if (n % 6 != 1 && n % 6 != 5)
		return false;
	// 6の倍数前後の数(素数かもしれない数)であることが保証された

	// 6の倍数前後の数を使って試し割りをする
	for (unsigned i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0)
			return false; // 6n-1
		if (n % (i + 2) == 0)
			return false; // 6n+1
	}

	return true;
}

int main()
{
	ll x;
	cin >> x;

	for (ll i = x; i < 1000000; i++)
	{
		if (is_prime(i))
		{
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}
