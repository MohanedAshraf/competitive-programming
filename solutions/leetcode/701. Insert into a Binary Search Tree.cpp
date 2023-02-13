class Solution {
public:
    void insert(TreeNode* root , TreeNode* inserted , TreeNode* prev){
        if(!root){
            if(prev && prev->val > inserted->val)
            prev->left = inserted;
            if(prev && prev->val < inserted->val)
            prev->right = inserted;
            return;
        }
        if(inserted->val > root->val)
           insert(root->right , inserted , root);
        if(inserted->val < root->val)
           insert(root->left , inserted , root);

    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* inserted = new TreeNode(val);
        insert(root  , inserted , NULL);
        return root ? root : inserted;
        
    }
};
