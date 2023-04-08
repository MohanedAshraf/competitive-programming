class Solution {
public:
  int count;
    void dfs(int i, int j, vector<vector<int>>& grid , bool f ) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] != 1)
            return;
        if(f) count++;
        grid[i][j] = 0;
        dfs(i+1, j, grid, f );
        dfs(i-1, j, grid, f);
        dfs(i, j+1, grid, f);
        dfs(i, j-1, grid, f);
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            dfs(i, 0, grid,0);
            dfs(i, n-1, grid,0);
        }
        for (int j = 0; j < n; j++) {
            dfs(0, j, grid,0);
            dfs(m-1, j, grid,0);
        }
        
        for (int i = 1; i < m-1; i++) {
            for (int j = 1; j < n-1; j++) {
                if (grid[i][j] == 1) {
                    dfs(i, j, grid,1);
                }
            }
        }
        return count;
    }
};
