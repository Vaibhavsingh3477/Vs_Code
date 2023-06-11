#include <iostream>
#include <math.h>
using namespace std;
int quadRoot(int a, int b, int c)
{
    int x1, x2;
    int d;
    d = b ^ 2 - 4 * a * c;
    x1 = (-b + pow(d, 0.5)) / 2 * a;
    x2 = (-b - pow(d, 0.5)) / 2 * a;

    // cout << x1 << x2;
    return x1;
    return x2;
}
int main()
{
    // d = b2 -4ac
    // x1= (-b + (d)^1/2)2a;
    // x2= (-b - (d)^1/2)2a;

    int a, b, c, d;
    cin >> a >> b >> c;
    cout << quadRoot(a, b, c);
    return 0;
}