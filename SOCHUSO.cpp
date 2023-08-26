#include <iostream>

using namespace std;

int main()
{
	freopen("SOCHUSO.inp", "r", stdin);
	freopen("SOCHUSO.out", "w", stdout);

	int n, tong = 0, dem = 0;
	cin >> n;

	while (n != 0)
	{
		tong += (n % 10);
		dem++;
		n /= 10;
	}
	cout << dem << " " << tong;
}