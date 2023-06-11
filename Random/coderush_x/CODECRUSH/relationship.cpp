#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int n = a + b;
    int k = (n - 2) / 2;

    if (a > b)
    {
        k -= (b - a) / 2;
    }

    cout << k << endl;
    return 0;
}
