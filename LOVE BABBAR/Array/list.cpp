  #include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after errrrase" << endl;
    // erase is done from begining as we initialize it l.begining
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    
    cout << " size of list " << l.size() << endl;
    return 0;
}