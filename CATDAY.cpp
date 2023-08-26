#include <iostream>

using namespace std;

int main()
{
	freopen("CATDAY.inp", "r", stdin);
	freopen("CATDAY.out", "w", stdout);

	long long m, k, a, b;
	cin >> m >> k;
	
	a = m / (k + 1);
	b = k * a;

	if (a + b == m)
	{
		cout << a << " " << b;
	}
	else
	{
		cout << "-1";
	}
}