#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int n;
double a[1000];

double dttg(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	freopen("TGLN.inp", "r", stdin);
	freopen("TGLN.out", "w", stdout);
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	double max1 = 0;

	for (int i = n - 1; i >= 3; i--)
	{
		if (a[i - 2] + a[i - 1] > a[i])
		{
			if (dttg(a[i - 2], a[i - 1], a[i]) >= max1)
			{
				max1 = dttg(a[i - 2], a[i - 1], a[i]);
			}
		}
	}
	cout << fixed << setprecision(3) << max1;
}