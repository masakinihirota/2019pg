#include <iostream>
using namespace std;

int N, a, ans, K;


int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		if (a == K + 1)
			K++;
		else
			ans++;
	}

	cout << (K ? ans : -1) << endl;
}
	