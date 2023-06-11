// #include <bits/stdc++.h>
#include <iostream>
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
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main()
{
    int a, b, c, d, e;
    cout << "Enter the Root-->" << endl;
    cin >> a;
    cout << "Enter the left child of root-->" << endl;
    cin >> b;
    cout << "Enter the right child of root-->" << endl;
    cin >> c;
    cout << "Enter the left child of left subtree-->" << endl;
    cin >> d;
    cout << "Enter the Right child of left subtree->" << endl;
    cin >> e;

    Node *root = new Node(a);
    root->left = new Node(b);
    root->right = new Node(c);
    root->right->left = new Node(d);
    root->right->right = new Node(e);

    cout << "The Inorder Traversal is-->"<<endl;

    inorder(root);
}