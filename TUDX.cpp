#include <iostream>

using namespace std;

bool doixung(string s)
{
	int len = s.length();

	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	freopen("TUDX.inp", "r", stdin);
	freopen("TUDX.out", "w", stdout);

	string s;
	cin >> s;

	if (doixung(s))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}