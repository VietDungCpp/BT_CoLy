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
	freopen("SNGUYENTO.inp", "r", stdin);
	freopen("SNGUYENTO.out", "w", stdout);

	int n, tam;
	cin >> n;

	if (ktsnt(n))
	{
		tam = n;

		while (tam != 0)
		{
			tam /= 10;

			if (ktsnt(tam))
			{
				cout << tam << endl;
			}
		}
	}
	else
	{
		cout << "-1";
	}
}