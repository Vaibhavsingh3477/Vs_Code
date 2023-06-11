#include <iostream>
using namespace std;
int COuntSet(int n)
{
    int res = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            res++;
        }
        // n = n / 2;
        n=n>>1;
    }
    return res;
}
int main()
{
    // input n = 5 ===> 0000.....0101
    // here Count the number of times the one is SET.
    int n, k;
    cout << "Enter A Number -->";
    cin >> n;
    cout << COuntSet(n);
    return 0;
}