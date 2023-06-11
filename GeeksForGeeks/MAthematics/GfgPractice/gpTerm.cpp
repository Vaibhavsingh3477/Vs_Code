#include<bits/stdc++.h>
using namespace std;
  double termOfGP(int A, int B, int N)
{
  double  r = B / (double)A;
//   cout << " r is " << r << endl;
//   cout << pow(r,N-1);
    double term = (A*pow(r,N-1));
    return term;
}
int main()
{
    cout << termOfGP(-27,-78,4);

return 0;
}