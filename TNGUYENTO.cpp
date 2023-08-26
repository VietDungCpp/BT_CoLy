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
	freopen("TNGUYENTO.inp", "r", stdin);
	freopen("TNGUYENTO.out", "w", stdout);

	int n;
	cin >> n;

	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i; j <= n; j++)
		{
			if (i + j == n)
			{
				if ((ktsnt(i)) || (ktsnt(j)))
				{
					cout << i << " " << j << endl;
				}
			}
			
		}
	}
}