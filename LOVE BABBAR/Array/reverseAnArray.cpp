#include <iostream>
using namespace std;

int reverseArray(int arr[], int count)
{

    for (int i = 0; i < (count - 1) / 2; i++)
    {
        // 1,2,3,4,5
        // 5,4,3,2,1

        swap(arr[i], arr[count - 1 - i]);
    }
}
int alternateReverse(int arr[], int count)
{

    for (int i = 0; i < (count ); i = i + 2)
    {
        if (i + 1 < count)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int printArray(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter Size :->";
    cin >> size;
    int arr[100];

    cout << "Enter Elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing the array Before Reversing" << endl;
    printArray(arr, size);
    cout << endl;
    // reverseArray(arr, size);
    // cout << "Printing the array After Reversing" << endl;
    // printArray(arr, size);
    // cout << endl;

    // for using this you , you have to make the original array again
    //  or use alternate array once not reverse array.
    alternateReverse(arr, size);
    cout << "Print array After Alt_Revers" << endl;
    printArray(arr, size);
    cout << endl;

    return 0;
}