#include <iostream>

using namespace std;

bool doixung(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - 1 - i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	freopen("MANGDX.inp", "r", stdin);
	freopen("MANGDX.out", "w", stdout);

	const int MAX = 1000;
	int n, a[MAX];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	if (doixung(a, n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}