#include <iostream>

using namespace std;

int tonguocso(int n)
{
	int s = 0;

	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			s += i;
		}
	}
	return s;
}

int main()
{
	int a, b;

	cin >> a >> b;

	if ((tonguocso(a) == b) && (tonguocso(b) == a))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}