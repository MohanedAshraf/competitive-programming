class Solution {
public:
    vector<int> v;
    void preorder(TreeNode* root){
        if(root == NULL) return;
        v.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return v;     
    }
};
