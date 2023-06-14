#include <bits/stdc++.h>

using namespace std;
int main()
{
    //...................................//
    //...........LIST...................//
    //.................................//
    // list<int> l;
    // list<int> n(l);
    // for (int i : n)
    // {
    //     cout << i << " ";
    // }

    // l.push_back(1);
    // cout << l.size() << " ";
    // l.push_front(2);
    // cout << l.size() << " ";
    // l.erase(l.begin());

    // for (int i : l)
    // {
    //     cout << i << " ";
    // }
    // for (int i : l)
    // {
    //     cout << i << " ";
    // }
    // ...........................................................//
    //...........STACK...........................................//
    //..........................................................//
    // stack<int> s;
    // s.emplace(1);
    // s.emplace(2);
    // s.emplace(3);
    // s.emplace(4);
    // s.emplace(5);

    // cout << "Is The Stack Empty :->" << s.empty();
    // cout << endl;

    // cout << "Top Element on the stack is :->" << s.top();
    // cout << endl;

    // s.pop();
    // cout << "Top Element on the stack is :->" << s.top();
    // cout << endl;

    // s.pop();
    // cout << "Top Element on the stack is :->" << s.top();
    // cout << endl;

    // cout << s.size();
    // cout << endl;
    // cout << "Top Element on the stack is :->" << s.top();
    // cout << endl;

    // QUEUE is FIFO ..
    // Queue is first in First Out ..

    // Priority Queue...

    // priority_queue<int> pq;                            // Max Heap
    // priority_queue<int, vector<int>, greater<int>> qp; // Min heap
    // pq.emplace(1);
    // pq.emplace(2);
    // pq.emplace(5);
    // pq.emplace(0);
    // pq.emplace(3);
    // cout << pq.top();
    // cout << endl;
    // qp.push(4);
    // qp.push(2);
    // qp.push(0);
    // qp.push(49);
    // qp.push(8);

    // cout << qp.top();

    //........................................................//
    //.................MAP...................................//
    //......................................................//
    // map<int, string> m;
    // m[2] = "babbar";
    // m[3] = "Awesome  2";

    // m[1] = "Love";
    // m[3] = "Awesome";

    // m.insert({5, "bheem"});

    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << " " << endl;
    // }

    // cout << "finding 13 -> " << m.count(3) << endl;

    // auto it = m.find(3);

    // for (auto i = it; i != m.end(); i++)
    // {
    //     cout << (*i).first << endl;
    // }

    //.............................//
    //.......ALGORITHM............//
    //...........................//

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << "Before Rotating" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "\nIs 4 present in our Vector (1 -> Yes Or 0 -> No) = Ans is -> " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Lower Bound -> " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 5, b = 6;
    cout << "Max value is " << max(a, b) << endl;
    swap(a, b);
    cout << "Value of a is -> " << (a);

    string s = "abcd";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After Rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    sort(v.begin(), v.end());
    cout << "\nAfter Sorting " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}