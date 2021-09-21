#include <bits/stdc++.h>

using namespace std;


class Graph
{

    map<int, bool> visited;
    map<int, vector<int>> adj;

public:


    void addEdge(int v, int w)
    {
        adj[v].push_back(w);
    }


    void BFS(int s)
    {

        queue<int> q;


        visited[s] = true;
        q.push(s);


        vector<int>::iterator i;

        while(!q.empty())
        {

            s = q.front();
            cout << s << " ";
            q.pop();


            for (i = adj[s].begin(); i != adj[s].end(); ++i)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    q.push(*i);
                }
            }
        }
    }
};





int main()
{

    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(2);

    return 0;
}
