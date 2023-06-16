// Rotate by k steps
// like
// Given Arr -> 1,2,3,4,5,6,7
// After Rotated By 3 steps;
// The array will be -> 5,6,7,1,2,3,4
// K Will Be only Non Negative Numbers;

voids rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }

    nums = temp;
}
