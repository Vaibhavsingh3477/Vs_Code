#include <iostream>
using namespace std;

// Program For Counting Digits .
int countDigits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n / 10;
        res++;
    }
    return res;
}
// Time Complexity is ---> THETA (n)  ---> 0(n) 
// Because Program Depends upon the Inputs n . 
int main()
{
    int n;
    cout << "Enter a Number PLZ-->";
    cin >> n;
    cout << "There are (" << countDigits(n) << ") Digits in " << n;
    return 0;
}