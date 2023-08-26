#include <iostream>

using namespace std;

int main()
{
	freopen("TIM_K.inp", "r", stdin);
	freopen("TIM_K.out", "w", stdout);

	int n, k = 0;
	cin >> n;

	while (pow(2, k) < n)
	{
		k++;
	}
	cout << k;
}