
class Solution {
public:
    map<int,int> m;
    bool res;
    void dfs(TreeNode* root , int sum , int targetSum){
        if(!root)
            return;
        if(root->left == NULL && root->right == NULL && targetSum == sum + root->val){
            res = true;
        }
        dfs(root->left , sum + root->val , targetSum);
        dfs(root->right , sum + root->val , targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        dfs(root , 0 , targetSum);
        return res;
    }
};
