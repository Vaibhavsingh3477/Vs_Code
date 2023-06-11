#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 4, 3, 2, 8};
    std::sort(std::begin(arr), std::end(arr));
    for (int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}