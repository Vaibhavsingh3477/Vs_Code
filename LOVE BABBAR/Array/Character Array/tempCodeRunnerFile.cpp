#include <bits/stdc++.h>
using namespace std;
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A';
        return temp;
    }
}

int main()
{
    // char ch[10];
    char name[20];
    cout << "Enter your Name :->";
    cin >> name;
    cout << "Your Name is :->" << name << endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     // cout << "Enter characters :->";
    //     cin >> ch[i];
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << ch[i];
    // }

    cout << "Your Name is :->" << toLowerCase('a') << endl;
    cout << "Your Name is :->" << toLowerCase('C') << endl;

    return 0;
}