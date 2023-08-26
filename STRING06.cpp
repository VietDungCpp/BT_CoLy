#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("STRING06.inp", "r", stdin);
	freopen("STRING06.out", "w", stdout);

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] >= 48) && (s[i] <= 57))
		{
			cout << s[i];
		}
	}
	return 0;
}