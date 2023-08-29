#include <iostream>

using namespace std;

int n, a[10000], maxa;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    maxa = a[0];

    for (int i = 1; i < n; i++)
    {
        maxa = max(maxa, a[i]);
    }

    cout << maxa;
}
