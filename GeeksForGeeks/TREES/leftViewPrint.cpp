#include<iostream>
using namespace std;
void printLeft(Node *root , int level)
{
    if(root == NULL)return;
    if(maxLevel<level)
    {
        cout<<(root->key)<<" ";
        maxLevel = level;
    }
    printLeft(root->left, level + 1)
    printLeft(root->right , level + 1)
}

void printLeftView(Node * root){
    printLeft(root,1);
}