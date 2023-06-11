#include <iostream>
using namespace std;
int checkGCD(int a, int b)
{
    int gcd;
    int k, r;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    return gcd;
}
int main() 
{
    int a, b;
    cout << "Enter 1st Num-->";
    cin >> a;
    cout << "Enter 2nd Num-->";
    cin >> b;

    cout << checkGCD(a, b);
    return 0;
}