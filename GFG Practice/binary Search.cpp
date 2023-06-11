#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int k)
{
    // code here
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {

        int mid = (start + end) / 2;
        if (k > arr[mid])
        {
            start = mid + 1;
        }
        else if (k < arr[mid])
        {
            end = mid - 1;
        }
        else if (k == arr[mid])
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int size;
    int array[];
    cin >> n;

    return 0;
}