#include <iostream>

using namespace std;

string s, smax;

int n, d = 0;

int main()
{
    freopen("CHUYENSO.inp", "r", stdin);
    freopen("CHUYENSO.out", "w", stdout);

    cin >> s;

    smax = s;

    n = s.length();

    for (int i = 1; i < n; i++)
    {
        s = s.substr(1, n - 1) + s.substr(0, 1);

        if (smax < s)
        {
            smax = s;
            d = i;
        }
    }
    cout << d << endl << smax;
}
