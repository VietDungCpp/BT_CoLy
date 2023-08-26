#include <iostream>

using namespace std;

int main()
{
	freopen("DEMBS.inp", "r", stdin);
	freopen("DEMBS.out", "w", stdout);

	const int MAX = 1000;
	int n, a[MAX]{}, dem = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				if (a[j] % a[i] == 0)
				{
					dem++;
				}
			}
			else
			{
				if (a[i] % a[j] == 0)
				{
					dem++;
				}
			}
		}
	}
	cout << dem;
}