#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    // by TWO Pointers APProach: i & j

    int i = 0;
    int j = 0;
    int k = 0;
    // if(arr[i] < arr[j])
    // arr[k] = arr[i];
    // i++;
    // else
    // arr[k] = arr[j];
    // j++;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // Copy @1st Array elements to #3rd Array;
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // Copy @2nd  Array elements to #3rd Array;
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void print(int arr3[], int p)
{
    for (int i = 0; i < p; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};

    int arr3[10] = {0};

    merge(arr1, 5, arr2, 5, arr3);
    print(arr3, 10);

    return 0;
}