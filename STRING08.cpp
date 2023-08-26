#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("STRING08.inp", "r", stdin);
	freopen("STRING08.out", "w", stdout);

	int dem = 1;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] != s[i + 1]) && (dem != 1))
		{
			cout << dem << s[i];
			dem = 0;
		}
		else if (s[i] != s[i + 1])
		{
			cout << s[i];
			dem = 0;
		}
		dem++;
	}
	return 0;
}