#include <bits/stdc++.h>
using namespace std;
// #define ull unsigned long long
// For small size input values.

// ull findFact(int N)
// {

//   // Initialize result
//     ull f = 1; // Or BigInt 1

//     // Multiply f with 2, 3, ...N
//     for (ull i = 2; i <= N; i++)
//         f *= i;

//     return f;
// }
// int digitsInFactorial(int N)
// {
//     // code here
//    long long int sum = findFact(N);
//     int count = 0;

//     while (sum > 0)
//     {
//         sum = sum / 10;
//         count++;
//     }

//     return count;
// }
// int main()
// {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     cout << "Factorial of this number is : " << findFact(n) << endl;;
//     cout << "Total digits in this number is : " << digitsInFactorial(n);

//     return 0;
// }
int digitsInFactorial(int n)
{
    // code here
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;
    double d = 0;
    for (int i = 2; i <= n; i++)
    {
        d = d + log10(i);
    }
    return floor(d) + 1;
}
int main()
{
    int n;
    cout << "Enter a number Please : ";
    cin >> n;
    cout << "Total digits are : " << digitsInFactorial(n);

    return 0;
}