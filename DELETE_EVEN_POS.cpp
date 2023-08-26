#include <iostream>

using namespace std;

int main()
{
	freopen("DELETE_EVEN_POS.inp", "r", stdin);
	freopen("DELETE_EVEN_POS.out", "w", stdout);

	const int MAX = 1000;
	int a[MAX], n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}