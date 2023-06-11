#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans =0,curr_sum=0;
    for (int i = 0; i < n; i++)
    {
        curr_sum +=arr[i];  
        if(curr_sum > ans){
            ans = curr_sum;
        }
        if (curr_sum < 0)
        {
           curr_sum = 0;
        }
        
    }
    cout << ans << endl;
    return 0;
}