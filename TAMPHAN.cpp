#include <iostream>

using namespace std;

int main()
{
    freopen("TAMPHAN.inp", "r", stdin);
    freopen("TAMPHAN.out", "w", stdout);

    int n, d = 0;
    cin >> n;

    while (n / 3 != 0)
    {
        n /= 3;
        d++;
    }
    cout << d;

    return 0;
}