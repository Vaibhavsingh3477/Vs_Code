#include<iostream>
#include<queue>
using namespace std;
int printLeft(Node *root)
{
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    while(q.empty() == false)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            /* code */
            Node * curr = q.top();
            q.pop();
            if(i==0)
            cout << (curr->key)<< " "
            if (curr->left!=NULL)
            {
                /* code */
                q.push(curr->left)
            }
             if (curr->right!=NULL)
            {
                /* code */
                q.push(curr->right)
            }
            
        }
        
    }
}
