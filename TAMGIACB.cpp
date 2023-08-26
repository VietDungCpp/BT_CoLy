#include <iostream>
#include <cmath>

using namespace std;

double tinhkc(double x1, double x2, double y1, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double dientich(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	freopen("TAMGIACB.inp", "r", stdin);
	freopen("TAMGIACB.out", "w", stdout);

	int xa, ya, xb, yb, xc, yc, xm, ym;
	cin >> xa >> ya >> xb >> yb >> xc >> yc >> xm >> ym;

	double ab, ac, bc, am, bm, cm;

	ab = tinhkc(xa, ya, xb, yb);
	ac = tinhkc(xa, ya, xc, yc);
	bc = tinhkc(xb, yb, xc, yc);
	am = tinhkc(xa, ya, xm, ym);
	bm = tinhkc(xb, yb, xm, ym);
	cm = tinhkc(xc, yc, xm, ym);

	if (dientich(ab, ac, bc) == dientich(am, ab, bm) + dientich(bm, cm, bc) + dientich(ac, am, cm))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

}