#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("STRING09.inp", "r", stdin);
	freopen("STRING09.out", "w", stdout);

	string s;
	cin >> s;

	int d = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] >= 48) && (s[i] <= 57))
		{
			d = d * 10 + s[i] - 48;
		}
		else
		{
			if (d == 0)
			{
				cout << s[i];
			}
			else
			{
				for (int j = 1; j <= d; j++)
				{
					cout << s[i];
				}
			}
			d = 0;
		}
	}
}