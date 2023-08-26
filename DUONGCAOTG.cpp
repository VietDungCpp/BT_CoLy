#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double a, b, c, ha, hb, hc, p, s, h;

int main()
{
    freopen("DUONGCAOTG.inp", "r", stdin);
    freopen("DUONGCAOTG.out", "w", stdout);
    
    cin >> a >> b >> c;

    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    ha = 2 * s / a;
    hb = 2 * s / b;
    hc = 2 * s / c;
    h = min(min(ha, hb), hc);

    cout << fixed << setprecision(5) << h;
}