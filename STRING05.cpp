#include <iostream>
#include <string>

using namespace std;

bool doixung(string s)
{
    int l = s.length();
    
    for (int i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    freopen("STRING05.inp", "r", stdin);
    freopen("STRING05.out", "w", stdout);

    string s;
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;

        if (doixung(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}