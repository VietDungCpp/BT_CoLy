#include <iostream>

using namespace std;

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
	int a, b;
	cin >> a >> b;

	cout << ucln(a, b);
}