#include <iostream>
using namespace std;
int divisor(int n)
{
    int key = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}
int main()
{
    int a;
    cout << "Enter a num-->";
    cin >> a;

    cout << divisor(a);

    return 0;
}