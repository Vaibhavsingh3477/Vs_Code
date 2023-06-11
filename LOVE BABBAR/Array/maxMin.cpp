#include <iostream>
using namespace std;

int minFinder(int arr[], int n)
{
    int min = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int maxFinder(int arr[], int n)
{

    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        // maxi = max(maxi,arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter Size -> ";
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Max is -> " << maxFinder(arr, size);
    cout << endl;
    cout << "Min is -> " << minFinder(arr, size);
    cout << endl;
    cout << "Sum is -> " << getSum(arr, size);
    cout << endl;

    return 0;
}