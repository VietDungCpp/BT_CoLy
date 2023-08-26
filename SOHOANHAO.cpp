#include <iostream>

using namespace std;

bool sohoanhao(int n)
{
	int tong = 0;

	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			tong += i;
		}
	}
	if (tong == n)
	{
		return true;
	}
	return false;
}

int main()
{
	int n;
	cin >> n;

	if (sohoanhao(n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}