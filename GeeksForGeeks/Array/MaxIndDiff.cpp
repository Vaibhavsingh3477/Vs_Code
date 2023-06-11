int maxIndDiff(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int j = n - 1;
        while (i < j)
        {
            if (arr[i] <= arr[j])
                ans = max(ans, j - i);
            break;
        }
        j--;
    }
    return ans;
}