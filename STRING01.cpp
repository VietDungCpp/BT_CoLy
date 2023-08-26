#include <iostream>
#include <string>

using namespace std;

int main()
{
	freopen("STRING01.inp", "r", stdin);
	freopen("STRING01.out", "w", stdout);

	int dem = 1;
	string s;
	
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == s[i + 1])
		{
			dem++;
		}
		else
		{
			cout << s[i] << " " << dem << endl;
			dem = 1;
		}
	}
}