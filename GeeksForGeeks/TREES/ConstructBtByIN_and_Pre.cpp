int preIndex = 0 
Node *cTree(int in[] , int Pre[] , int is , int ie)
{
  if (is > ie ) return NULL;
  Node *root = newNode(Pre[preIndex++])
  int inIndex
  for(int i = is ; i <= ie ; i++){
    if(in[i] == root->key)
    {
      inIndex= i;
      break;
    }
  }

  root->left = cTree(in,pre,is,inline-1);
  root->right = cTree(in,pre,inIndex+1 , ie);
  return root;
}