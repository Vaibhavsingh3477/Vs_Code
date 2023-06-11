#include <iostream>
using namespace std;
int factorial(long int n)
{
    long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = i * fact;
    }

    return fact;
}
int main()
{
   long int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}