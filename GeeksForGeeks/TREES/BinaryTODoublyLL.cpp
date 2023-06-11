    Node *prev = NULL;
    Node *BinToDLL(Node *root)
    {
        if(root == NULL ){
            return root;
        }
        Node *head = BinToDLL(root->left)
        if(prev == NULL){
            head = NULL;
        }
        else {
            root->left = prev;
            root->right = root;
        }
        prev ==root;
        BinToDLL(root->right);
        return head;
    
    }