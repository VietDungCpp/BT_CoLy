#include <iostream>
#include <string>

using namespace std;

void thay(string& s, string x, string y)
{
	while (s.find(x, 0) != string::npos)
	{
		int p = s.find(x, 0);
		int n = x.length();
		s.replace(p, n, y);
	}
}

int main()
{
	freopen("STRING10.inp", "r", stdin);
	freopen("STRING10.out", "w", stdout);

	string s;
	getline(cin, s);

	string t1, t2;

	cin >> t1 >> t2;

	string tx = "***";
	
	thay(s, t1, tx);
	thay(s, t2, t1);
	thay(s, tx, t2);

	cout << s;
	
}