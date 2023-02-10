class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        vector<pair<int ,int>> lands;
        for(int i = 0 ; i < grid.size() ; i++)
            for(int j = 0 ; j < grid[i].size() ; j++)
                if(grid[i][j] == 1) lands.push_back({i, j});

        int mx =  -1 ;
        for(int i = 0 ; i < grid.size() ; i++)
            for(int j = 0 ; j < grid[i].size() ; j++){
                if(grid[i][j] == 0){
                    int mn = INT_MAX;
                    for(auto x : lands){
                        int distance = abs(i - x.first) + abs(j - x.second);
                        mn = min(mn , distance);
                    }
                    if(mn != INT_MAX)
                    mx = max(mn , mx);

                }
            }
        

        return mx ;
            
        
    }
};
