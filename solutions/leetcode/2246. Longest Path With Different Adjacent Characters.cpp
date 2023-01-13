class Solution {
public:
  int dfs(vector<vector<int>> &adj, string &s, int node , int &mx){
    if(adj[node].size() == 0) return 1;

    int mx1 = 0 , mx2 = 0 ;

    for(int i = 0; i < adj[node].size(); i++){
         int x = dfs(adj, s , adj[node][i] , mx );
         if(s[adj[node][i]] == s[node]) x = 0;
         if(x > mx1){
             mx2 = mx1;
             mx1 = x;
         }
         else 
            mx2 = max(mx2 , x);
         
    }

    mx = max(mx , mx2+mx1+1);
    return mx1 + 1;
  }
    int longestPath(vector<int>& parent, string s) {
        int n = parent.size() , mx =1;
        vector<vector<int>> adj(n);
        for(int i = 1; i != parent.size(); i++)
        adj[parent[i]].push_back(i);
        dfs(adj, s, 0 , mx);
        return mx ; 


    }
};
