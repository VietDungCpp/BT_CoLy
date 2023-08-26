#include <iostream>

using namespace std;

int main() 
{
    freopen("SNUM.inp", "r", stdin);
    freopen("SNUM.out", "w", stdout);

    int n, a[10] = { 0 };

    cin >> n;

    while (n != 0) 
    {
        a[n % 10] += 1;
        n = n / 10;
    }

    for (int i = 9; i >= 0; i--) 
    {
        for (int j = 1; j <= a[i]; j++) 
        {
            cout << i;
        }
    }
}