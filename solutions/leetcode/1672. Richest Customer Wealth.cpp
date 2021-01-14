static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size() , m = accounts[0].size() , mx =0 ;
       for(int i= 0; i< n ; i++){
            for(int j = 1 ; j<m ; j++)
                accounts[i][0]+=accounts[i][j];
            
           mx = max(accounts[i][0] , mx);
       }
        return mx ;
    }
};