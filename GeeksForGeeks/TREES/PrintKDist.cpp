#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};
void printKDist(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << root->data << " ";
    }
    else
    {
        printKDist(root->left, k - 1);
        printKDist(root->right, k - 1);
    }
}

int main()
{
    int a, b, c, d, e, f, g;
    int k;
    cout << "Enter the Root-->" << endl;
    cin >> a;
    cout << "Enter the left child of root-->" << endl;
    cin >> b;
    cout << "Enter the right child of root-->" << endl;
    cin >> c;
    cout << "Enter the left child of left subtree-->" << endl;
    cin >> d;
    cout << "Enter the right child of left subtree->" << endl;
    cin >> e;
    // cout << "Enter the left child of right subtree->" << endl;
    // cin >> f;
    cout << "Enter the right child of right subtree->" << endl;
    cin >> g;

    Node *root = new Node(a);
    root->left = new Node(b);
    root->right = new Node(c);
    root->left->left = new Node(d);
    root->left->right = new Node(e);
    // root->right->left = new Node(f);
    root->right->right = new Node(g);

    cout << "Enter a Level for Checking Kth Distance :->";
    cin >> k;
    cout << endl;
    cout << "The Elements at k = " << k << " level are -->";
    printKDist(root, k);
    cout << endl;
}