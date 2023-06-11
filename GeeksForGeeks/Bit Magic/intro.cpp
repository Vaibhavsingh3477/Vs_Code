#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter A and B-->" << endl;
    cin >> a >> b;
    cout << " AND -->"<< (a & b) << endl;
    cout << " OR-->"<< (a | b) << endl;
    cout << " XOR -->"<< (a ^ b) << endl;
    cout << " Not A -->"<< (~a) << endl;
    cout << " Not b -->"<< (~b) << endl;


    // Right Shift
    cout << " Right Shift -->"<< (a>>1)<<endl;

    // Left Shift
    cout  << " Left Shift -->"<< (a<<1)<<endl;
    

    return 0;
}