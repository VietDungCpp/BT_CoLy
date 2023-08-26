#include <iostream>

using namespace std;

int main()
{
	freopen("INSERT_X.inp", "r", stdin);
	freopen("INSERT_X.out", "w", stdout);

	const int MAX = 1000;
	int n, x, k;
	int a[MAX]{};

	cin >> n >> x >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	for (int i = k + 1; i < n + 1; i++)
	{
		a[k + 1] = a[k];
		a[k] = x;
	}
	
	for (int i = 0; i <= n; i++)
	{
		cout << a[i] << " ";
	}
}