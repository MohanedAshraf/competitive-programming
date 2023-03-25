class Solution {
public:
    void dfs(vector<vector<int>> &adj, vector<bool> &visited, int from, long long &counter) {
    visited[from] = true;
    for (auto to : adj[from])
        if (!visited[to])
             dfs(adj, visited, to , ++counter);
    return;        
    }

    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n);
        long long res = 0;
        for (auto &c : edges) {
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
        }
        int m = n;
        for(int i =0 ; i<n ; i++){
            if(!visited[i]){
             long long counter = 1;
             dfs(adj, visited, i , counter);
             res += counter * (m-counter);
             m-=counter;
            }
        }
        return res;
    }

    
};
