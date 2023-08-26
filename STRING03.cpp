#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("STRING03.inp", "r", stdin);
	freopen("STRING03.out", "w", stdout);

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (((int)s[i] >= 65) && ((int)s[i] <= 97))
		{
			s[i] = char(int(s[i]) + 32);
		}
	}
	cout << s;
}