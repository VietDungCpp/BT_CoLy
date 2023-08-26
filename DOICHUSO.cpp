#include <iostream>

using namespace std;

string s;

int main()
{
	freopen("DOICHUSO.inp", "r", stdin);
	freopen("DOICHUSO.out", "w", stdout);

	cin >> s;

	int k = s.length();

	for (int i = 0; i < k / 2; i++)
	{
		if (s[i] < s[k - i - 1])
		{
			swap(s[i], s[k - i - 1]);
		}
	}

	cout << s;
}