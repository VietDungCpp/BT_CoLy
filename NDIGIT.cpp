#include <iostream>

using namespace std;

int a[10] = { 0 };

void demchuso(int n)
{
	int i = n;

	while (i != 0)
	{
		a[i % 10] += 1;
		i /= 10;
	}
}

int main()
{
	freopen("NDIGIT.inp", "r", stdin);
	freopen("NDIGIT.out", "w", stdout);

	int m, n;

	cin >> m >> n;

	if (m > n)
	{
		swap(m, n);
	}

	for (int i = m; i <= n; i++)
	{
		demchuso(i);
	}
	
	for (int j = 0; j <= 9; j++)
	{
		cout << a[j] << " ";
	}
}