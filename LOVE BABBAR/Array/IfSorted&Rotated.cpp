bool check(vector<int> &nums)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    if (nums[n - 1] > num[0])
    {
        count++;
    }
    return count == 1;
}