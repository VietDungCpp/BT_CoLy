#include <iostream>

using namespace std;

int main()
{
    freopen("PTTONG.inp", "r", stdin);
    freopen("PTTONG.out", "w", stdout);

    int n;
    cin >> n;

    if (n < 6)
    {
        cout << "-1";
    }

    for (int i = 1; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                if (i + j + k == n)
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}