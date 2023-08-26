#include <iostream>

using namespace std;

int main()
{
	freopen("TIMQUACAN.inp", "r", stdin);
	freopen("TIMQUACAN.out", "w", stdout);

	long long n, m, a[1000]{};
	int dem = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] == m)
		{
			cout << i + 1 << " ";
			dem++;
		}
	}

	if (dem == 0)
	{
		cout << -1;
	}
}