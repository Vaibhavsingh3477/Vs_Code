int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (1 + max(height(root->left), height(root->right)));
}
// Worst Case -> O(n^2)
int diameterTree(Node *root)
{
    if(root== NULL)return 0;
    int d1 =  1+height(root->left)+height(root->right);
    int d2 = diameterTree(root->left);
    int d3 = diameterTree(root->right);
    
    return max(d1,max(d2,d3));
}

------------------------------------------------------------------------------------
 Method 2 (Efficient Solution)
------------------------------------------------------------------------------------

int res = 0 ;
int height(Node *root);
{
    if(root == NULL) return 0;
    int lh = height (root->left);
    int rh = right (root->right);
    res = max(res,max(lh,rh));
    return (1+max(lh,rh));

}
