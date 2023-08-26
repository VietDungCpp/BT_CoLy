#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	freopen("TAMGIAC.inp", "r", stdin);
	freopen("TAMGIAC.out", "w", stdout);

	double a, b, c, x, y, z, m;
	cin >> x >> y >> z;

	a = x + y - z;
	b = x + z - y;
	c = y + z - x;

	m = a;
	
	if (b < m)
	{
		m = b;
	}
	if (c < m)
	{
		m = c;
	}

	cout << fixed << setprecision(5) << m;
}