#include <iostream>

using namespace std;

long x, n, m;

int main()
{
	freopen("GAVACHO.inp", "r", stdin);
	freopen("GAVACHO.out", "w", stdout);

	cin >> n >> m;

	if (m % 2 == 1)
	{
		cout << -1;
	}
	else
	{
		x = (m - 2 * n) / 2;

		if ((4 * x + (n - x) * 2) == m)
		{
			cout << n - x << " " << x;
		}
		else
		{
			cout << -1;
		}
	}
}