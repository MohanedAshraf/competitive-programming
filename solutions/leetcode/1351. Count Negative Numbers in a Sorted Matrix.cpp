static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum =0;
        vector<int>::iterator lower;

        for(int i = 0 ; i <grid.size() ; i++){
            lower = lower_bound(grid[i].begin(), grid[i].end(),-1 , std::greater<int>());
            sum += grid[i].end() - lower ; 
        }
        
        return sum ;
    }
};

