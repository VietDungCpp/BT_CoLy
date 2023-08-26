#include <iostream>
#include <cmath>

using namespace std;

int n, k, x;

int main()
{
    freopen("LUYTHUA.inp", "r", stdin);
    freopen("LUYTHUA.out", "w", stdout);
    
    cin >> k >> n;

    while (pow(x, k) != n)
    {
        x++;

        if (pow(x, k) > n)
        {
            cout << -1;
            break;
        }
    }

    if (pow(x, k) == n)
    {
        cout << x;
    }
}