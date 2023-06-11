#include <iostream>
#include <math.h>
using namespace std;
int power1(int n, int p)
{
    // time complexity  --> 0(n)
    int res = 1;
    for (int i = 0; i < p; i++)
    {
        res = res * n;
    }
    return res;
}

int power2(int n, int p)
{
    // The Real Num destroys is we use power directly

    // if (n % 2 == 0)
    // {
    //     return power2(n, p / 2) * power2(n, p / 2);
    // }
    // else
    // {
    //     return power2(n, p - 1) * n;
    // }

    // So , we use temp ;

    if (p == 0)
        return 1;

    int temp = power2(n, p / 2);
    temp = temp * temp;
    if (p % 2 == 0)
    {
        return temp;
    }
    else
    {
        return temp * n;
    }
}

int main()
{
    int n, p;
    cout << "Enter number-->";
    cin >> n;

    cout << "Enter the Power-->";
    cin >> p;

    cout << pow(n, p);

    cout << endl;

    cout << power1(n, p);
    cout << endl;

    cout << power2(n, p);

    return 0;
}