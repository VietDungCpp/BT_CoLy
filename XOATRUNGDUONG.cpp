#include <iostream>

using namespace std;

int main()
{
	freopen("XOATRUNGDUONG.inp", "r", stdin);
	freopen("XOATRUNGDUONG.out", "w", stdout);

	const int MAX = 1000;
	int a[MAX]{}, n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				for (int k = j; k < n - 1; k++)
				{
					a[k] = a[k + 1];
				}
				n--;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}