// Binary Search in C++

#include <iostream>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int key)
{
    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;
    for (int i = 0; i < n; i++)
    {
        if (key != arr[i])
        {
            continue;
        }
        if (ans.first = -1)
        {
            ans.first = i;
        }
        ans.second = i;
    }
    return ans;
}

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // int mid = (start + end) / 2;

        if (array[mid] == key)
            ans = mid; 
        end = mid - 1;

        else if (array[mid] > key)
            start = mid + 1;

        else if (arr[mid] < key)
            end = mid - 1;
    }
    mid = start + (end - start) / 2;

    return ans;
}

int main()
{
    int array[7] = {3, 4, 5, 6, 7, 8, 9};
}