#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double c, d, a, b;

int main()
{
	freopen("HINHTHOI.inp", "r", stdin);
	freopen("HINHTHOI.out", "w", stdout);

	cin >> c >> d;

	a = c / 2;
	b = d / 2;

	cout << fixed << setprecision(5) << sqrt(a * a + b * b);
}