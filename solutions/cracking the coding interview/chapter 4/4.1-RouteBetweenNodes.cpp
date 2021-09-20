#include<bits/stdc++.h>

using namespace std;

struct Node
{
    bool visted = false;
    vector<Node*> adjacent;
};
struct Graph
{
    vector<Node> nodes;

};

bool routeBetweenNodes (Graph & g, Node* start, Node* end )
{
 //BFS
    start->visted = true;

    if(start == end)
        return true ;

    queue<Node*> q ;

    q.push(start);

    while(!q.empty())
    {
        Node * u = q.back();
        q.pop();
        if(u != nullptr)
        {
            for(Node * n : u->adjacent)
            {
                if(n->visted == false)
                {
                    if(n == end)
                    {
                        return true ;
                    }
                    else
                    {
                        n->visted = 1;
                        q.push(n);
                    }
                }
            }
            u->visted = true;
        }
    }


    return false;

}





int main()
{

    Node a, b, c;

    a.adjacent.push_back(&b);
    b.adjacent.push_back(&c);

    Graph g = { { a, b, c } };

    if (routeBetweenNodes(g, &a, &c))
        cout << "True" << std::endl;
    else
        cout << "False" << std::endl;


    return 0;
}
