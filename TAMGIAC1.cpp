#include <iostream>
#include <iomanip>

using namespace std;

double chuvi(double a, double b, double c)
{
	return a + b + c;
}

double dientich(double a, double b, double c)
{
	double p = chuvi(a, b, c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	freopen("TAMGIAC1.inp", "r", stdin);
	freopen("TAMGIAC1.out", "w", stdout);

	double a, b, c;
	cin >> a >> b >> c;

	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		cout << fixed << setprecision(3) << chuvi(a, b, c) << endl;
		cout << fixed << setprecision(3) << dientich(a, b, c) << endl;
	}
	else
	{
		cout << "-1";
	}
}