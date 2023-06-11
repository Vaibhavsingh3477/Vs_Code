#include <iostream>
using namespace std;

int countLeaves(Node *root)
{
    int count = 0;
    if (!root)
    {
        return 0;
    }
    if (!root->left and !root->right)
    {
        return 1;
    }
    return countLeaves(root->left) + countLeaves(root->right);
}
int main()
{
    return 0;
}