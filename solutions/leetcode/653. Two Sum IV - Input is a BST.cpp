class Solution {
public:
    map<int , bool> m;
    void traverse(TreeNode* root ){
        if(!root)return;
        m[root->val] = true;
        traverse(root->left);
        traverse(root->right);
     }
    bool findTarget(TreeNode* root, int k) {
        traverse(root);
        for(auto i : m){
            
            if(m.find(k - i.first) != m.end() && k-i.first != i.first ) return true;
        }


        return false;
    }
};
