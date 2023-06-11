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


// Time Complexity -->
// O ( n*n^1/2);
int main()
{
    int a;
    cout << "Enter a num plz-->";
    cin >> a;

    for (int i = 2; i <= a; i++)
    {
        // cout << primeCheck(i);
        if (primeCheck(i) == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}