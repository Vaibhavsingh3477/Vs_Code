#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Which Kth Max and Kth Min do you want -> ";
    cin >> n;
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(3);
    
    // 10,5,3,2,1
    cout << "Maximum is " << pq.top();
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        pq.pop();
    }
    cout << n << " Max is ";
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> q;

    q.push(1);
    q.push(5);
    q.push(2);
    q.push(10);
    q.push(3);
    
    // 1,2,3,5,10
    cout << " & Minimum is " << q.top();
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        q.pop();
    }
    cout << n << " Min is ";
    cout << q.top() << endl;
    return 0;
}