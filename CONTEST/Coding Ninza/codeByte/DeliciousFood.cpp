#include <bits/stdc++.h>

int deliciousFood(int n, int m, vector<vector<int>> fav)
{
    // Initialize an array to keep track of the frequency of each food item
    int freq[m + 1] = {0};

    // Loop over the people and their favorite foods
    for (int i = 0; i < n; i++)
    {
        int k = fav[i][0];
        for (int j = 1; j <= k; j++)
        {
            int food = fav[i][j];
            freq[food]++;
        }
    }

    // Count the number of foods that are liked by everyone
    int count = 0;
    for (int i = 1; i <= m; i++)
    {
        if (freq[i] == n)
        {
            count++;
        }
    }

    // Return the count of common favorite foods
    return count;
}
