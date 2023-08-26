#include <iostream>

using namespace std;

int n, dem = 0;

int ktsnt(int n)
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
	freopen("DSNTO.inp", "r", stdin);
	freopen("DSNTO.out", "w", stdout);

	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		if (ktsnt(i))
		{
			cout << i << " ";
		}
	}
}