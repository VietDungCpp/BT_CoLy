#include <iostream>

using namespace std;

int main()
{
	freopen("SODAONGUOC.inp", "r", stdin);
	freopen("SODAONGUOC.out", "w", stdout);

	int n, tam, daonguoc = 0;
	cin >> n;

	while (n != 0)
	{
		tam = n % 10;
		daonguoc = daonguoc * 10 + tam;
		n /= 10;
	}
	cout << daonguoc;
}