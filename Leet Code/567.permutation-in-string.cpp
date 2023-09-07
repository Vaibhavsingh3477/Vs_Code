/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution {
public :

    bool checkEqual(int a[26], b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                return 0;
            }
            return 1;
        }
    };
    {
        public :
            bool checkInclusion(string s1, string s2){
                int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    while (i < windowSize)
    {
        int index = s2.length() - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2))
    {
        return 1;
        while (i < s2.length())
        {
        }
    }
}
    }
;
// @lc code=end
