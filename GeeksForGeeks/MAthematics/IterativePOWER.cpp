#include <iostream>
using namespace std;
int iterativePOW(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
            res = res * x;
             n = n / 2;
        x = x * x;
       
    }
    return res;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << iterativePOW(x, n);

    // OR Simply We CAn Use {{{{ pow }}}} FUNCTION .
    return 0;
}