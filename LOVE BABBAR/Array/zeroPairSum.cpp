#include <bits/stdc++.h> 

int ZeroPairSum(int n, vector<int> arr){
    // Write your code here
    int sum = 0;
    unordered_map<int,int>mp;
    int count = 0 ;
    for(int i=0;i<n;i++)
    {
        int b = sum-arr[i];
        if(mp[b])
        {
            count+=mp[b];
        }
        mp[arr[i]]++;
    }
    return count;
    
}