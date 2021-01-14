/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        int sum = 0;
        
        if(root == NULL){
            return 0;
        }
        
        if(root->val >= low && root->val <= high  ){
            sum+=root->val;
        }
        
        return sum + rangeSumBST(root->right , low , high) + rangeSumBST(root->left , low , high);
    }
};