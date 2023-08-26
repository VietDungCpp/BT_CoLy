#include <iostream>

using namespace std;

int main()
{
	freopen("DELETE_X.inp", "r", stdin);
	freopen("DELETE_X.out", "w", stdout);

	const int MAX = 1000;
	int a[MAX]{}, n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
	}

	for (int i = k - 1; i < n; i++) 
	{
		a[i] = a[i + 1];
	}
	n--;

	for (int i = 0; i < n; i++) 
	{
		cout << a[i] << " ";
	}
}