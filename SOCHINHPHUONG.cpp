#include <iostream>

using namespace std;

bool socp(int n)
{
	int m = sqrt(n);
	return m * m == n;
}

int main()
{
	freopen("SOCHINHPHUONG.inp", "r", stdin);
	freopen("SOCHINHPHUONG.out", "w", stdout);

	int n;
	cin >> n;

	if (socp(n))
	{
		cout << "1";
	}
	else
	{
		cout << "-1";
	}
}