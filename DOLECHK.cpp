#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	freopen("DOLECHK.inp", "r", stdin);
	freopen("DOLECHK.out", "w", stdout);

	int n, k;
	int a[100005]{}, max1 = 0, min1 = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 0; i < k; i++)
	{
		min1 += a[i];
	}

	for (int i = n - 1; i > n - k; i--)
	{
		max1 += a[i];
	}

	cout << max1 << endl << min1;
}