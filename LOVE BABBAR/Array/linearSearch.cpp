#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        else
            return false;
    }
}

int main()
{
    int arr[5] = {1, 3, -1, 0, 4};
    // whether 0 is there;

    // Method 1:-

    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] == 0)
    //     {
    //         cout << "Yes 0 is there at index " << i;
    //     }
    //     else
    //         cout << "No 0 is not there";
    // }

    // Method 2:-
    int key;
    cout << "Enter the Element to be search for\n";
    cin >> key;
    bool found = LinearSearch(arr, 5, key);
    if (found)
    {
        cout << "Yes It's Present" << endl;
    }
    else
        cout << "Not Present" << endl;

    return 0;
}