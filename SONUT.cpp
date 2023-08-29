#include <iostream>

using namespace std;

int n, tam;

int tongchuso(int n)
{
    int t = 0;

    while (n != 0)
    {
        t += n % 10;
        n /= 10;
    }
    return t;
}

int main()
{
    cin >> n;
    
    tam = tongchuso(n);

    if (tongchuso(tam) >= 1 && tongchuso(tam) <= 9)
    {
        cout << tongchuso(tam);
    } 
}