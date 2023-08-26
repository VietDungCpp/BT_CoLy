#include <iostream>

using namespace std;

int sochuso(int n)
{
    int dem = 0;
    while (n != 0)
    {
        dem++;
        n /= 10;
    }
    return dem;
}

int main()
{
    freopen("SOGANH.inp", "r", stdin);
    freopen("SOGANH.out", "w", stdout);

	long long n;
    int x, y, tam = 1;
	cin >> n;

    for (int i = 1; i <= sochuso(n) / 2; i++)
    {
        tam *= 10;
    }

    x = n % tam;
    y = n / tam;

    if (x == y) 
    {
        cout << x;
    }
    else 
    {
        cout << "-1";
    }
}