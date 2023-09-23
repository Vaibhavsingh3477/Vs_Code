#include <bits/stdc++.h>
using namespace std;

void printTriangle(int n)
{
    // code here
    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    printTriangle(n);

    return 0;
}