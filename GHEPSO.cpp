#include <iostream>

using namespace std;

string x, y, zmin, zmax;

int main()
{
	freopen("GHEPSO.inp", "r", stdin);
	freopen("GHEPSO.out", "w", stdout);

	cin >> x >> y;

	if (x > y)
	{
		zmin = y + x;
		zmax = x + y;
	}
	else
	{
		zmin = x + y;
		zmax = y + x;
	}

	cout << zmin << endl << zmax;
}