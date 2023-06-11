// #include <iostream>
// #include <climits> // Need this for INT_MIN
// using namespace std;

// ->> Time Complexity is 0(n)
// int main() {
//     int arr[] = {5, 2, 7, 8, 10};
//     int Index;
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int max_element = INT_MIN;

//     for(int i=0; i<n; i++) {
//         if(arr[i] > max_element) {
//             max_element = arr[i];
//         }
//     }

//     cout << "The maximum element in the array is: " << max_element;
//     cout << "at Index"<< Index << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
// Also A Function;
// int getLargest(int arr[] , int n)
// {
//     int idx = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < arr[idx])
//             idx = i;
//     }
//     return idx;
// }
int main()
{
    // arr[] = {10,5,20,8}
    // we have to find the maximum element in this array.
    int arr[4] = {10, 500, 20, 88};
    int idx = 0, i, max = arr[0];

    for (i = 0; i < 4; i++)
    {
        // if (max < arr[i + 1])
        //     max = arr[i + 1];
        if (arr[i] > arr[idx])
            idx = i;
    }
    cout << idx << endl;

  //  cout << getLargest(arr[] ,4) return 0;
}