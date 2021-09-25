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

// O(n) space, O(n) time + O(log N) recursive calls 

void listOfDepthDFS( TreeNode * root, vector< vector<TreeNode*> > & lists, int level )
{
    if(root == nullptr)return ;
    vector<TreeNode*> li = vector<TreeNode * >() ;
    if(lists.size() == level)
    {
        li.push_back(root);
        lists.push_back(li);

    }
    else
    {
        lists[level].push_back(root);


    }


    listOfDepthDFS(root->left, lists, level + 1);
    listOfDepthDFS(root->right, lists, level + 1);
}

// O(n) space, O(n) time

vector< vector<TreeNode* > > listOfDepthBFS ( TreeNode * root)
{
    vector<TreeNode*> curr ;
    if(root != nullptr)
    {

        curr.push_back(root);
    }

    vector< vector < TreeNode *> > lists ;
    while(! curr.empty())
    {
        vector<TreeNode*> next ;
        for(auto i : curr)
        {
            if(i->left != nullptr)
                next.push_back(i->left);
            if(i->right != nullptr)
                next.push_back(i->right);

        }
        lists.push_back(curr);
        curr = next ;
    }

    return lists;

}



int main()
{


    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    TreeNode * tree = createMinimalBST(v, 0, 6);

    cout<<  "PreOrder traversing  of the BST" <<endl;
    preOrder(tree);
    cout<<endl;




    vector< vector< TreeNode* > > listsDFS ;
    listsDFS.push_back(vector<TreeNode*>());


    listOfDepthDFS(tree, listsDFS, 0);



    cout<<endl<<"DFS"<<endl;


    for(auto i : listsDFS)
    {
        for(auto j : i )
        {

            cout<<j->v<< " ";
        }

        cout<<endl;
    }

    cout<<endl<<"BFS"<<endl;

    vector< vector< TreeNode* > > listsBFS ;

    listsBFS =  listOfDepthBFS(tree);

    for(auto i : listsBFS)
    {
        for(auto j : i )
        {

            cout<<j->v<< " ";
        }

        cout<<endl;
    }

    return 0;
}
