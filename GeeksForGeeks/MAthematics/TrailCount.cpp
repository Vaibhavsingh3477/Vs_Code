#include <iostream>
using namespace std;
int trailCount(int n)
{
    // Naive Approach -->

    // int fact = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     fact = i * fact;
    // }
    // int res = 0;
    // while (fact % 10 == 0)
    // {
    //     res++;
    //     fact = fact / 10;
    // }


    //Efficient Method-->

    
    int res=0;
    for(int i = 5;i<=n;i=i*5)
    {
        res=res+n/i;
    }

    return res;
}
int main()
{
    int a;
    cout << "Enter A number -->";
    cin >> a;
    cout << trailCount(a);
    return 0;
}