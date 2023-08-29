#include <iostream>

using namespace std;

int n, t = 1;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        t *= i;
    }

    cout << t;
}