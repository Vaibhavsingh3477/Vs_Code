#include <iostream>
#include <limits.h>
using namespace std;

int isPal(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }

    // return rev==n;
    if (rev == n)
    {
        printf("Its Palindrome--");
    }
    else
    {
        printf("Not Palindrome--");
    }
    return rev;
}
int main()
{
    int number = 4554;
    cout << isPal(number) << endl;
    return 0;
}