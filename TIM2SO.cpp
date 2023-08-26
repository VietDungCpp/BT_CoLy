#include <iostream>

using namespace std;

int timso(int a, int b)
{
	for (int x = 1; x <= a; x++)
	{
		for (int y = 1; y <= a; y++)
		{
			if ((x + y == a) && (x - y == b))
			{
				cout << x << " " << y;
				return 0;
			}
		}
	}
	return -1;
}

int main()
{
	freopen("TIM2SO.inp", "r", stdin);
	freopen("TIM2SO.out", "w", stdout);

	int a, b;
	cin >> a >> b;

	if (timso(a, b))
	{
		cout << "-1";
	}
}