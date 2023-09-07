#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
void sort0and1and2(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
void sortArray(vector<int> &arr, int n) {
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
  
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (arr[mid]) {
  
        // If the element is 0
        case 0:
            swap(arr[lo++], arr[mid++]);
            break;
  
        // If the element is 1 .
        case 1:
            mid++;
            break;
  
        // If the element is 2
        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}
void sortArr(int arr[], int n)
{
    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
  
    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
  
    // Update the array
    i = 0;
  
    // Store all the 0s in the beginning
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
  
    // Then all the 1s
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
  
    // Finally all the 2s
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
  
    // Print the sorted array
    printArr(arr, n);
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
    int arr[8] = {1, 0, 2, 2, 0, 1, 0, 2};
    sort0and1and2(arr, 8);
    printArray(arr, 8);
    return 0;
}