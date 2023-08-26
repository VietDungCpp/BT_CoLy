#include <iostream>

using namespace std;

int sochuso(int n)
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
	freopen("NOIHAISO.inp", "r", stdin);
	freopen("NOIHAISO.out", "w", stdout);

	int a, b, tich, tich2;

	cin >> a >> b;

	tich = a;
	tich2 = b;

	for (int i = 1; i <= sochuso(b); i++)
	{
		tich *= 10;
	}

	for (int i = 1; i <= sochuso(a); i++)
	{
		tich2 *= 10;
	}

	tich += b;
	tich2 += a;

	if (tich < tich2)
	{
		cout << tich2;
	}
	else
	{
		cout << tich;
	}
}