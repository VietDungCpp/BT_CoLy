#include <iostream>

using namespace std;

int n, tam, amax = 0, imax = 0;
long a[1000005];

int main()
{
    freopen("CHONSAT.inp", "r", stdin);
    freopen("CHONSAT.out", "w", stdout);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tam;
        a[tam]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (amax <= a[i])
        {
            amax = a[i];
            imax = i;
        }
    }
    cout << amax << endl << imax;
}