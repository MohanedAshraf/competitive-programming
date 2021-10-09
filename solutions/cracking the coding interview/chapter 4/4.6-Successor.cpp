#include <bits/stdc++.h>

using namespace std;

//Tree node with parent reference
struct TreeNode
{
    int v ;
    TreeNode* left ;
    TreeNode* right ;
    TreeNode* parent;
    TreeNode( int val ) : v{ val }, left{ nullptr }, right{nullptr}, parent{nullptr} { }


};

// insert nodes to BST

TreeNode* insertNode(TreeNode* node, int data)
{


    if (node == NULL)
        return new TreeNode(data);
    else
    {
        TreeNode* temp;


        if (data <= node->v)
        {
            temp = insertNode(node->left, data);
            node->left = temp;
            temp->parent = node;
        }
        else
        {
            temp = insertNode(node->right, data);
            node->right = temp;
            temp->parent = node;
        }


        return node;
    }
}

// print tree by preOrder

void preOrder(TreeNode* node)
{
    if (node == NULL)
        return;
    cout << node->v << " ";
    preOrder(node->left);
    preOrder(node->right);
}

//get the left deepest child

TreeNode * leftMostChild(TreeNode* n)
{
    if(n == nullptr)
        return nullptr;
    while(n->left != nullptr)
    {
        n = n->left;
    }

    return n ;
}

// get the successor

TreeNode * inorderSucc(TreeNode * n)
{
    if(n == nullptr) return nullptr ;

    if(n->right != nullptr)
        return leftMostChild(n->right);

    else
    {
        TreeNode * q = n ;
        TreeNode * x = q->parent;

        while (x->left != q && x != nullptr)
        {
            q = x;
            x = x->parent;
        }


        return x ;
    }






}




int main()
{


    TreeNode*  root = nullptr  ;
    TreeNode* succ = nullptr;
    TreeNode* temp = nullptr;

    root = insertNode(root, 20);
    root = insertNode(root, 8);
    root = insertNode(root, 22);
    root = insertNode(root, 4);
    root = insertNode(root, 12);
    root = insertNode(root, 10);
    root = insertNode(root, 14);

    temp = root->left->right->right;

    preOrder(root);

   succ = inorderSucc(temp);

    if (succ != nullptr)
        cout <<endl<< "Inorder Successor of "
             << temp->v << " is "<< succ->v;
    else
        cout <<"\n Inorder Successor doesn't exit";


    return 0;
}
