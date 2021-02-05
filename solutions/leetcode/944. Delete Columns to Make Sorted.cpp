static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        
        int c = 0 , n =  strs.size() , m = strs[0].size() ;
        
        for(int i= 0 ; i<m ; i++)
            for(int j = 0; j<n-1 ; j++ )
                if(strs[j][i] > strs[j+1][i]){ 
                    c++;
                   break;
          }
        
        return c ;   
    }
};
