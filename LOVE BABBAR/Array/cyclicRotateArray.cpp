#include <bits/stdc++.h>
using namespace std;
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int cyclicRotateArray(int arr[], int size)
{
    //Right Rotating -->
    // int temp = arr[size - 1];
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     arr[i] = arr[i - 1];
    // }
    // arr[0] = temp;
    

    // Left Rotating--->
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i + 1] = arr[i];
    }
    arr[size - 1] = temp;

    return 0;
}
int main()
{
    int t;
    cout << "Enter size of Array: \n";
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Rotating" << endl;
    printArray(arr, t);
    cyclicRotateArray(arr, t);
    cout << "After Left Rotating" << endl;
    printArray(arr, t);

    return 0;
}