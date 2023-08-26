#include <iostream>

using namespace std;

int ucln(int a, int b)
{
    while (a % b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return b;
}

int main()
{
    freopen("HONSO.inp", "r", stdin);
    freopen("HONSO.out", "w", stdout);

    int a, b;
    int n = 0, t = 0, m = 0;

    cin >> a >> b;

    if (b == 0)
    {
        cout << "-1";
    }
    else
    {
        if (a < b)
        {
            cout << "-1";
        }
        else
        {
            int x = ucln(a, b);
            a /= x;
            b /= x;
            n = a / b;
            t = a % b;
            m = b;
            cout << n << " " << t << " " << m;
        }
    }

    return 0;
}