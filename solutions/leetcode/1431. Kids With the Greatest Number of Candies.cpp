static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = 0 ;
        vector<bool> g(candies.size() , 0 );
        
        for(int i = 0 ; i<candies.size() ; i++)
            mx = max(mx , candies[i]);
        
         for(int i = 0 ; i<candies.size() ; i++)
             if(candies[i]+extraCandies >= mx)
                g[i]=1;
           
         
        
        return g ;
    }
};