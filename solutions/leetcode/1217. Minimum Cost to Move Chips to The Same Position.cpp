static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int o = 0 , e=0 ;
        for(int i = 0 ; i < position.size() ;i++){
            if(position[i]&1)o++;
            else e++;
        }
            
        
        return min(e , o);
    }
};