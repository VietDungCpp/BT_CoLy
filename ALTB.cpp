#include <iostream>
#include <cmath>

using namespace std;

int altb(int n, int k)
{
	for (int a = 1; a <= k; a++)
	{
		for (int b = 0; b < k; b++)
		{
			if ((pow(a, b) == n) && (a + b == k))
			{
				cout << a << " " << b;
				return 0;
			}
		}
	}
	return -1;
}

int main()
{
	freopen("ALTB.inp", "r", stdin);
	freopen("ALTB.out", "w", stdout);

	int n, k;

	cin >> n >> k;
	
	if (altb(n, k))
	{
		cout << "-1";
	}
}