#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
void sort0and1(int A[], int n)
{
    // Write your code here.
    // 0 1 1 0 0 1
    // 0 0 0 1 1 1
    int st = 0;
    int ed = n - 1;
    while (st < ed)
    {
        while (st < ed && A[st] == 0)
            st++;
        while (st < ed && A[ed] == 1)
            ed--;
        if (st < ed)
        {
            swap(A[st], A[ed]);
            st++;
            ed--;
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[8] = {1, 1, 0, 1, 0, 1, 0, 0};
    sort0and1(arr, 8);
    printArray(arr, 8);
    return 0;
}