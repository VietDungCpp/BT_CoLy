#include <iostream>

using namespace std;

int main()
{
	freopen("LKUOCSO.inp", "r", stdin);
	freopen("LKUOCSO.out", "w", stdout);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if ((i == 1) || (i == n))
		{
			continue;
		}
 
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}
}