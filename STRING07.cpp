#include <iostream>
#include <string>

using namespace std;

string s;

int demtu(string s)
{
    int dem = 0;
    int n = s.length();

    if (s[0] != ' ')
    {
        dem++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if ((s[i] == ' ') && (s[i + 1] != ' '))
        {
            dem++;
        }
    }

    if (s[n - 1] == ' ')
    {
        dem--;
    }

    return dem;
}

void chuanhoa(string s)
{
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            for (int j = i; j < n; j++)
            {
                s[j] = s[j + 1];
            }
            i--;
            n--;
        }
        else
        {
            break;
        }
    }
    
    while (s[n] == ' ')
	{
		if (s[n - 1] != ' ')
		{
			s[n] = '\0';
			break;
		}
	}

    for (int i = 0; i < n; i++)
    {
        if ((s[i] == ' ') && (s[i + 1] == ' '))
        {
            for (int j = i; j < n; j++)
            {
                s[j] = s[j + 1];
            }
            i--;
            n--;
        }
    }

    cout << s;
}

int main()
{
    freopen("CHUANHOAXAU.inp", "r", stdin);
    freopen("CHUANHOAXAU.out", "w", stdout);

    getline(cin, s);

    cout << demtu(s) << endl;
    chuanhoa(s);
}