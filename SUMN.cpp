#include <iostream>

using namespace std;

int main()
{
	freopen("SUMN.inp", "r", stdin);
	freopen("SUMN.out", "w", stdout);

	int n, m = 0, tam;
	cin >> n;

	tam = n;

	while (tam != 0)
	{
		m += (tam % 10);
		tam /= 10;
	}

	cout << m + n;
}