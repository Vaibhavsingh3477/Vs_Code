// C++ program to find roots of a quadratic equation
#include <bits/stdc++.h>
using namespace std;

// Prints roots of quadratic equation ax*2 + bx + x
void findRoots(int a, int b, int c)
{
    // If a is 0, then equation is not quadratic, but
    // linear
    // if (a == 0)
    // {
    //     cout << "Invalid";
    //     return;
    // }

    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if (d > 0)
    {
        // cout << "Roots are real and different \n";
        cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
             << (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0)
    {
        // cout << "Roots are real and same \n";
        cout << -(double)b / (2 * a);
    }
    else // d < 0
    {
        // cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);
    }
}

// Driver code
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // Function call
    findRoots(a, b, c);
    return 0;
}
// #include <iostream>
// #include <cmath>
// using namespace std;
// int quadRoot(int a, int b, int c)
// {
//     int x1, x2;
//     int d;
//     d = (b * b) - (4 * a * c);
//     x1 = (-b + sqrt(d)) / (2 * a);
//     x2 = (-b - sqrt(d)) / (2 * a);

//     // cout << x1 << x2;
//     cout << x2 <<" ";
//     return x1;
// }
// int main()
// {
//     // d = b2 -4ac
//     // x1= (-b + (d)^1/2)2a;
//     // x2= (-b - (d)^1/2)2a;

//     int a, b, c, d;
//     cin >> a >> b >> c;
//     cout << quadRoot(a, b, c);
//     return 0;
// }