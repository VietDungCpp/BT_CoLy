#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("STRING02.inp", "r", stdin);
	freopen("STRING02.out", "w", stdout);

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (((int)s[i] >= 97) && ((int)s[i] <= 122))
		{
			s[i] = char(int(s[i]) - 32);
		}
	}
	cout << s;
}