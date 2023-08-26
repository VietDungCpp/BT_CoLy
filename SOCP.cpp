#include <iostream>

using namespace std;

int socp(int n)
{
	int m = sqrt(n);
	return m * m == n;
}

int main()
{
	freopen("SOCP.inp", "r", stdin);
	freopen("SOCP.out", "w", stdout);

	int n;
	cin >> n;

	while (!socp(n))
	{
		n--;
	}
	cout << n;
}