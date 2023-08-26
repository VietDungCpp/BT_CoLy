#include <iostream>

using namespace std;

int main()
{
	freopen("DTHCN.inp", "r", stdin);
	freopen("DTHCN.out", "w", stdout);

	int a, b;
	cin >> a >> b;

	cout << (a + b) / 2 << " " << (a + b) - (a + b) / 2;
}