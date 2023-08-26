#include <iostream>
#include <cmath>

using namespace std;

int socp(int n)
{
	int m = sqrt(n);
	return m * m == n;
}

int main()
{
	freopen("TCP.inp", "r", stdin);
	freopen("TCP.out", "w", stdout);

	int n, a[1000]{}, tong = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		if (socp(a[i]))
		{
			tong += a[i];
		}
	}

	cout << tong;
	
}