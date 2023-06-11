#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

int duplicateByXor(vector<int> &arr)
{
    int ans = 0;

    // XOR ing all elements in a array
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    // Xor [1,n-1]
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int findDuplicate(int arr[], int count)
{
    // 1 2 3 4 4
    int i, j;
    int duplicate;
    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = arr[i];
            }
        }
    }
    return duplicate;
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
    // cout << "The Unique number is->" << findUnique(arr, size);
    cout << "Duplicated number is " << findDuplicate(arr, size);
    cout << endl;

    return 0;
}