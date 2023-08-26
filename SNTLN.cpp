#include <iostream>

using namespace std;

bool ktsnt(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return n > 1;
}

int main()
{
	freopen("SNTLN.inp", "r", stdin);
	freopen("SNTLN.out", "w", stdout);

	int n;
	cin >> n;

	while (!ktsnt(n))
	{
		n--;
	}

	cout << n;

	return 0;
}