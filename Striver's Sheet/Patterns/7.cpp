#include <bits/stdc++.h>
using namespace std;
int main()
{ // N= 5

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    /*
     void printTriangle(int n) {
            // code here
            for(int row =0; row<n;row++){
                //spaces
                for(int col=0;col<row;col++){
                    cout<<" ";
                }
                //stars
                for(int col=0;col<2*n-2*row-1;col++){
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    */
    return 0;
}