int isBalanced(Node*root)
{
    if(root==NULL)return 0;
    int lh =isBalanced(root->left);
    if(lh == -1)return -1;
    int rh = isBalanced(root->right);
    if(rh == -1)return -1;
    if(abs(lh-rh)>1) return -1;
    else return max(lh,rh)+1;
}