#include <iostream>
using namespace std;
int factorial(long int n)
{
    long int fact = 1;
   long int dig = 0;
    for (int i = 1; i <= n; i++)
    {
        fact = i * fact;
    }
    while (fact > 0)
    {
        fact = fact / 10;
        dig++;
    }
    return dig;
}
int main()
{
    long int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}