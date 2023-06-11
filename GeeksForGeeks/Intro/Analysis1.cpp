#include <iostream>
using namespace std;

// Method 1
// FUNCTION 1
int sumFunc1(int n)
{
    int sum;
    sum = (n) * (n + 1) / 2;
    printf("Sum is -->%d ", sum);
    return sum;
}

// Method 2
// FUNCTION 2
int sumFunc2(int n)
{
    int i;
    int sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is -->%d", sum);
}

// Method 3
// FUNCTION 3

int sumFunc3(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum++;
        }
    }
    printf("Sum is -->%d", sum);
}

int main()
{
    int n;
    cout << "Enter number!!" << endl;
    cin >> n;
    sumFunc1(n);
    cout << endl;
    sumFunc2(n);
    cout << endl;
    sumFunc3(n);
    cout << endl;

    return 0;
}