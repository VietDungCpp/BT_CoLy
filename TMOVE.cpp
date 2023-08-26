#include <iostream>

using namespace std;

int m, n, t, a[200][200];

int main()
{
    freopen("TMOVE.inp", "r", stdin);
    freopen("TMOVE.out", "w", stdout);

    cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> t;
            a[i][j] = t + max(max(a[i][j - 1], a[i - 1][j]), a[i - 1][j - 1]);
        }
    }

    cout << a[m][n];
}
