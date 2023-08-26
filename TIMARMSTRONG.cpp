#include <iostream>

using namespace std;

int demsochuso(int n)
{
	int dem = 0;
	while (n != 0)
	{
		n /= 10;
		dem++;
	}
	return dem;
}

bool armstrong(int n)
{
	int luythua = demsochuso(n);
	int tam = n, s = 0, tach;

	while (tam != 0)
	{
		tach = tam % 10;
		s += pow(tach, luythua);
		tam /= 10;
	}

	if (s == n)
	{
		return true;
	}
	return false;
}

int main()
{
	int a, b, dem = 0;

	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		if (armstrong(i))
		{
			dem++;
			cout << i << " ";
		}
	}
	if (dem == 0)
	{
		cout << "-1";
	}
}