#include <iostream>

using namespace std;

int n, tam;
long long tong = 0;

int main()
{
    freopen("THEMCHUSO.inp", "r", stdin);
    freopen("THEMCHUSO.out", "w", stdout);

    cin >> n;

    while (n != 0)
    {
        tam = n % 10;
        tong += tam;
        n /= 10;
    }

    cout << 3 - (tong % 3);
}