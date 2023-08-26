#include <iostream>

using namespace std;

int main()
{
	freopen("DEMCHUSO.inp", "r", stdin);
	freopen("DEMCHUSO.out", "w", stdout);

	long long n, sochan = 0, sole = 0, tam;
	cin >> n;

	while (n != 0)
	{
		tam = n % 10;
		if (tam % 2 == 0)
		{
			sochan++;
		}
		else
		{
			sole++;
		}

		n /= 10;
	}

	cout << sochan << " " << sole;
}