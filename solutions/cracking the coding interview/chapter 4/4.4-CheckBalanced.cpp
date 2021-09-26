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
int getHeight ( TreeNode * root )
{
    if(root == nullptr) return -1 ;
    int left = getHeight(root->left);
    if(left == INT_MIN) return INT_MIN;

    int right = getHeight(root->right);
    if(right == INT_MIN) return INT_MIN ;

    if(abs(left - right ) > 1 )
    {
        return INT_MIN ;
    }
    else
    {
        return max(left, right) +1;
    }

}
bool  isBalanced(TreeNode * root)
{
    return getHeight(root) != INT_MIN ;

}



int main()
{


    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    TreeNode * tree = createMinimalBST(v, 0, 6);

    cout<<  "PreOrder traversing  of the BST" <<endl;
    preOrder(tree);

    cout<<endl;


    cout<<"Is The Tree Balanced : \n" <<isBalanced(tree)<<endl;





    return 0;
}
