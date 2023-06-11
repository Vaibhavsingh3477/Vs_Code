#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurence(vector<int> &arr)
{
    int i = 0;
    sort(arr.begin(), arr.end);
    vector<int> ans;
    while (i < arr.size())
    {
        int count = 1;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == ar[j])
                count++;
        }
        ans.push_back(count);
        i += count;
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == ans[i + 1])
            return false;
    }
}

int main()
{
    int arr[6] = {1, 2, 2, 3, 3, 3};
    cout << uniqueOccurence(arr[6]);

    return 0;
}