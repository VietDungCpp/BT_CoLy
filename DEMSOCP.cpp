#include <iostream>

using namespace std;

int socp(int n)
{
	int m = sqrt(n);
	
	return m * m == n;
}

int main()
{
	freopen("DEMSOCP.inp", "r", stdin);
	freopen("DEMSOCP.out", "w", stdout);

	int n, dem = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (socp(i))
		{
			dem++;
		}
	}
	cout << dem;
}