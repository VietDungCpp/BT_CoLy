#include <iostream>

using namespace std;

int tongchuso(int n)
{
	int tong = 0;

	while (n != 0)
	{
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int demchuso(int n)
{
	int dem = 0;

	while (n != 0)
	{
		dem++;
		n /= 10;
	}
	return dem;
}

int main()
{
	freopen("LOAIBOCS.inp", "r", stdin);
	freopen("LOAIBOCS.out", "w", stdout);

	const int MAX = 1000;
	int a[MAX]{};
	int n, dem = 0;

	cin >> n;

	int tam = n;

	if (n % 3 == 0)
	{
		cout << "0";
	}
	else
	{
		for (int i = 1; i <= demchuso(n); i++)
		{
			a[i] = tam % 10;
			tam /= 10;
		}
		for (int i = 1; i <= demchuso(n); i++)
		{
			if ((tongchuso(n) - a[i]) % 3 == 0)
			{
				cout << a[i];
				dem++;
				break;
			}
		}
		if (dem == 0)
		{
			cout << "-1";
		}
	}
}
