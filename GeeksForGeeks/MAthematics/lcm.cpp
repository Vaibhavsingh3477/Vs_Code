#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
    /*
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
    */
}
int lcm(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
            return res;
        res++;
    }
    return res;
}

int main()
{
    // first find GCD and then lcm
    // to use formula --> lcm  = a*b / gcd(a,b)
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    cout << lcm(a, b);

    return 0;
}