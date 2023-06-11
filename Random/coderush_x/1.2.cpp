#include <bits/stdc++.h>
using namespace std;

bool isluckyPair(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if((nums[i]+nums[j])%2==0 && (nums[i]+nums[j])>0){
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> nums;
    int n;
    for (int i = 0; i < 3; i++) {
        cin >> i;
        nums.push_back(n);
    }
    if(isluckyPair(nums))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

