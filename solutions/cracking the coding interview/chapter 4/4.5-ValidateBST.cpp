#include <bits/stdc++.h>

using namespace std;


struct TreeNode
{
    int v ;
    TreeNode* left ;
    TreeNode* right ;


};
TreeNode * createMinimalBST(vector<int> a, int start, int end )
{
    if(end < start)
    {
        return nullptr ;
    }

    int mid = (start + end) / 2;

    TreeNode * n = new TreeNode;
    n->v = a[mid];
    n->left = createMinimalBST(a, start, mid -1 );
    n->right = createMinimalBST(a, mid + 1, end);

    return n;
}

void preOrder(TreeNode* node)
{
    if (node == NULL)
        return;
    cout << node->v << " ";
    preOrder(node->left);
    preOrder(node->right);
}

bool  isBST(TreeNode * root, int min, int max )
{
    if(root == nullptr) return true;

    if( root->v < min ||   root->v > max )
        return false;

    return isBST(root->left, min, root->v - 1) && isBST(root->right, root->v + 1, max);




}

bool isBST(TreeNode* root)
{
    return isBST(root, -2e9, 2e9);
}


int main()
{


    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    TreeNode * tree = createMinimalBST(v, 0, 6);

    cout<<  "PreOrder traversing  of the BST" <<endl;
    preOrder(tree);

    cout<<endl;

    cout<<"Is The Tree Binary Search Tree  : \n" <<isBST(tree)<<endl;



    return 0;
}
