class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return traverse(root ,"");
    }

    int traverse(TreeNode* root , string sum){
        if(!root) return 0;
        if(!root->left && !root->right) return stoi(sum + to_string(root->val));
        return traverse(root->left , sum + to_string(root->val)) + traverse(root->right , sum + to_string(root->val));
    }
};
