#include <bits/stdc++.h>
using namespace std;
int main()
{
    // stack<int> st,st2;
    // st.push(1);
    // cout << st.top() << endl;
    // st.push(2);
    // cout << st.top() << endl;
    // st.push(3);
    // cout << st.top() << endl;
    // st.swap(st2);
    // cout << st.size();
    // cout << " " << st2.size();
    // return 0;

    // queue<int> q1, q2;
    // q1.push(1);
    // q1.push(2);
    // q1.push(3);
    // q1.push(4);
    // cout << "The size of Queue is ->" << q1.size()<< endl;
    // cout << q1.front()<<" ";
    // cout << q1.back();
    // how to print element in queue vectors?
    // cout << endl;
    // q1.back();

    // Priorty Wueue

    // C++ program to demonstrate the use of priority_queue

    // int arr[6] = { 10, 2, 4, 8, 6, 9 };

    // defining priority queue
    // priority_queue<int> pq;

    // printing array
    // cout << "Array: ";
    // for (auto i : arr) {
    // 	cout << i << ' ';
    // }
    // cout << endl;
    // // pushing array sequentially one by one
    // for (int i = 0; i < 6; i++) {
    // 	pq.push(arr[i]);
    // }

    // // printing priority queue
    // cout << "Priority Queue: ";
    // while (!pq.empty()) {
    // 	cout << pq.top() << ' ';
    // 	pq.pop();
    // }
    //     #include <bits/stdc++.h>
    // using namespace std;
    // int main()
    // {
    //     priority_queue<int> pq;
    //     pq.push(1);
    //     pq.push(5);
    //     pq.push(2);
    //     pq.push(10);
    //     pq.push(3);
    //     cout << "Maximum is " << pq.top();

    //     priority_queue<int, vector<int>, greater<int>> q;

    //     q.push(1);
    //     q.push(5);
    //     q.push(2);
    //     q.push(10);
    //     q.push(3);
    //     cout << " & Minimum is " << q.top();
    //     return 0;
    // }

    // return 0;

    // sets
    // set<int> set_name;
    // C++ program to demonstrate various functions of
    // STL

    set<int, greater<int>> s1;

    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    // printing set s1
    set<int, greater<int>>::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());

    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }

    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr << " ";
    }

    cout << endl;

    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : "
         << *s1.upper_bound(40) << endl;

    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) : "
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : "
         << *s2.upper_bound(40) << endl;

    return 0;
}
