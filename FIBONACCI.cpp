#include <iostream>

using namespace std;

int f[10000], n;

int main()
{
    cin >> n;

    f[0] = 0;
    f[1] = f[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    
    cout << f[n];
}