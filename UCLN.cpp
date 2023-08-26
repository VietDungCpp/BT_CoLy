#include <iostream>

using namespace std;

int ucln(int& a, int& b)
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
	freopen("UCLN.inp", "r", stdin);
	freopen("UCLN.out", "w", stdout);

	int a, b;
	cin >> a >> b;

	cout << ucln(a, b);
}