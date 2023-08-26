#include <iostream>
#include <string>

using namespace std;

long n, k;
string s;

int main()
{
    freopen("NCODING.inp", "r", stdin);
    freopen("NCODING.out", "w", stdout);

    cin >> n >> k;
    cin >> s;

    if (k > n)
    {
        k = k % n;
    }

    cout << (s.substr(n - k, k) + s.substr(0, n - k));
}