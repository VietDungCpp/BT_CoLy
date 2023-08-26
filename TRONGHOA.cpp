#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	freopen("TRONGHOA.inp", "r", stdin);
	freopen("TRONGHOA.out", "w", stdout);

	int n, a[10005]{};
	int dem = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] + 1 != a[i + 1])
		{
			dem++;
		}
	}
	cout << dem;
}