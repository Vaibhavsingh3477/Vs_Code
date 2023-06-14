#include <bits/stdc++.h>
using namespace std;
int main()
{
  
   vector<int>nums = {0, 1, 0, 3, 12, 0};
 

    // can Be a Approach .............

    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr1[i] != 0)
    //     {
    //         arr2[k++] = arr1[i];
    //     }
    //     else
    //     {
    //         continue;
    //         arr2[k] =0;
    //     }
    // }S

    // Approach @2 ... Working.......

    int i =0;
    for (int j = 0; j < nums.size(); j++)
    {
        if(nums[j] != 0)
        {
            swap(nums[j] , nums[i]);
            i++;
        }
    }
    
    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}