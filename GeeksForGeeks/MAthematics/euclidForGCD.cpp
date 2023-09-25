#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    //Method 1
    //Euclid Algo.


    // while (a != b)
    // {
    //     if (a > b)
    //     a=a-b;
    //     else
    //     b=b-a;
    // }
    // return a;


    //Method 2 (optimjised implementation)

    if (b==0)
    return a;
    else 
    return gcd(b,a%b);
}
int main()
{
int a , b;
int lcm ;
cout << "Enter a number -->";
cin>> a;

cout << "Enter other number -->";
cin>> b;
lcm = (a*b)/gcd(a,b);
cout<< "The Gcd is -->" <<gcd(a,b);
cout << endl;
cout<<"The Lcm is " <<lcm;

    return 0;
}