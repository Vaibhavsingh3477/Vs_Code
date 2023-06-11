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
void sieve(int n)
{
 bool primeCheck(n+1);

}
int main()
{
int i;
cout << "Enter a Number-->";
cin >> i;

    return 0;
}