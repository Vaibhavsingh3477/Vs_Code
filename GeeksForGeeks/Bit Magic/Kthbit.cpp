
// By Left shift               -
//     if (n & (1 << (k - 1))) -
//         cout << "SET";      -
//     else                    -
//         cout << "NOT SET";  -
// }

// CPP program to check if k-th bit
// of a given number is set or not using
// right shift operator.
#include <iostream>
using namespace std;

void isKthBitSet(int n, int k)
{
    if ((n >> (k - 1)) & 1)
        cout << "SET";
    else
        cout << "NOT SET";
}

// Driver code
int main()
{
    // int n = 5, k = 1;
    int n, k;
    cout << " Enter N and X;";
    cin >> n >> k;
    isKthBitSet(n, k);
    return 0;
}
