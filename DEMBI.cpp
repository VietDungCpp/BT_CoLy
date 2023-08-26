#include <iostream>

using namespace std;

int main()
{
	freopen("DEMBI.inp", "r", stdin);
	freopen("DEMBI.out", "w", stdout);

	long long n;
	cin >> n;

	if ((2 * n % 5 == 0) && (n > 2 * n / 5))
	{
		cout << n - 2 * n / 5 << " " << 2 * n / 5;
	}
	else
	{
		cout << "-1";
	}
}