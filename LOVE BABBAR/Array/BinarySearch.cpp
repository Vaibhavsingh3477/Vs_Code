// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int key)
{

    int low = 0;
    int high = (size - 1);
    // int mid = (low + high) / 2;
    int mid = low + (high - low) / 2;
    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        // int mid = low + (high - low) / 2;
        int mid = (low + high) / 2;

        if (array[mid] == key)
            return mid;

        if (array[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    cout << "Enter the Key:->";
    int key;
    cin >> key;
    int size = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, size, key);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}