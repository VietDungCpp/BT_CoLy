#include <iostream>

using namespace std;

int main()
{
	const int MAX = 1000;
	int a[MAX], n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] < 0)
		{
			cout << a[i] << " ";
		}
	}
}