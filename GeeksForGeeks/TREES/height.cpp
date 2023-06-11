#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};

int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (1 + max(height(root->left), height(root->right)));
}
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
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

    cout << " The Height of this Tree is -->" << endl;
    cout << height(root);
    cout << endl;
    cout << "The Inorder Traversal is-->" << endl;
    inorder(root);
    cout << endl;
    cout << "The Preorder Traversal is-->" << endl;
    preorder(root);
    cout << endl;
    cout << "The Postorder Traversal is-->" << endl;
    postorder(root);
}