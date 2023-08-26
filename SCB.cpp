#include <iostream>

using namespace std;

int main()
{
	freopen("SCB.inp", "r", stdin);
	freopen("SCB.out", "w", stdout);

	const int MAX = 1000;
	int n, a[MAX], tong = 0, dem = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		tong += a[i];
	}
	

	for (int i = 0; i < n; i++)
	{
		if (a[i] == tong / 2)
		{
			dem++;
			cout << a[i];
		}
	}

	if (dem == 0)
	{
		cout << "-1";
	}
}