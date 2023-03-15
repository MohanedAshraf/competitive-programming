class Solution {
public:
    int prev;
    bool isCompleteTree(TreeNode* root) {
        prev = getHeight(root);
        return traverse(root , prev , 0);
    }
    bool traverse(TreeNode* root , int height , int currentHeight){
        if(!root){
            if(abs(height - currentHeight) > 1 || currentHeight > prev) return false;
            prev = currentHeight;
            return true;
        }
        return  traverse(root->left, height , currentHeight + 1) && traverse(root->right, height , currentHeight + 1);
    }
    int getHeight(TreeNode*root)
    {
        if(!root)return 0;
        return max(getHeight(root->left),getHeight(root->right))+1;
    }
};
