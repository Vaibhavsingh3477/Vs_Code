#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // Lower Case
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        // Upper Case
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
}

int main()
{
    // char name[10];
    // char string = 'ab cd';
    // cout << "Enter your Name -> ";
    // cin >> name;

    // // For One By One Printing Characters.....
    // //  for (int i = 0; i < 9; i++)
    // //  {
    // //      cout << c[i];
    // //  }

    // // For Printing All Together ...........
    // cout << "Your Name is " << name;
    // cout << string << endl;

    // // Now To Calculate The Length of Our Character Array;
    // int len = getLength(name);
    // cout << "\nLength is " << len;
    // cout << endl;

    // cout << "BEfore Reversing -> " << name;
    // cout << endl;

    // reverse(name, len);
    // cout << "After Reversing -> " << name;
    // cout << endl;

    // cout << "Palindrome or Not " << checkPalindrome(name, len);

    // Waiting for completing the DSA.

    return 0;
}