#include <iostream>
using namespace std;
int celciTofarenhite(int celci)
{
    int faren;

    faren = (9*celci)/5  +32;
    return faren;
}
int main()
{
    int celci;
    cin >> celci;
    cout << celciTofarenhite(celci);
    return 0;
}