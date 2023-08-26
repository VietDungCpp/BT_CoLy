#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("STRING04.inp", "r", stdin);
	freopen("STRING04.out", "w", stdout);

	string s;
	cin >> s;

	for (int i = s.length() - 1; i >= 0; i--)
	{
		cout << s[i];
	}

	return 0;
}