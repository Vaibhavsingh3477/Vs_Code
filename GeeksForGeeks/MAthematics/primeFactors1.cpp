#include <iostream>
using namespace std;
bool primeCheck(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int primeFactor(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (primeCheck(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout<<i<<" ";
                x = x * i;
            }
        }
    }
}
int main()
{
    int a;
    cout << "Enter a num-->";
    cin >> a;

    cout << primeCheck(a);
    cout << endl;
    cout << primeFactor(a);

    return 0;
}