#include <iostream>

using namespace std;

int a, b;

int ucln(int a, int b)
{
	while (a % b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return b;
}

int main()
{
	freopen("TGPHANSO.inp", "r", stdin);
	freopen("TGPHANSO.out", "w", stdout);

	cin >> a >> b;

	int x = ucln(a, b);

	cout << a / x << " " << b / x;
}