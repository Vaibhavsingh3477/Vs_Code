int ans=-1;
    int KthSmallestElement(Node *root, int K) {
        tree(root,K);
        return ans;
    }
    
    int tree(Node* root,int k){
        if(root==NULL)return 0;
        
        int res=1;
        
        res+=tree(root->left,k);
        
        if(res==k){
            ans=root->data;
            return 100001;
        }
        
        res+=tree(root->right,k-res);
        return res;
    }