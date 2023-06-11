#include <iostream>
using namespace std;

bool is_lucky_pair(int nums[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if ((nums[i] + nums[j]) % 2 == 0 && (nums[i] + nums[j]) > 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int nums[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    if (is_lucky_pair(nums))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
