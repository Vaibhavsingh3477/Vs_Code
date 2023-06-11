// method 1
vector<int> findArrayInterjsection(vector<int> &arr1, int, vector<int> &arr2.int m)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = INT_MIN; // or -2 or -112233;
                // can be written any random number like -1112345".
                // here it used to not linked or compare that number again;

                break;
            }
        }
    }
}

// Method 2
vector<int> findArrayInterjsection(vector<int> &arr1, int, vector<int> &arr2.int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < 2arr [j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
