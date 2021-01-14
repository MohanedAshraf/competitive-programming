static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool a[123]={0};
        int x[123]={0};
        
        for(int i = 0; i<jewels.size() ; i++)
            a[jewels[i]]=1;
        for(int i = 0; i<stones.size() ; i++)
            x[stones[i]]++;
        int c=0;
        
        for(int i =64 ;i<123 ;i++){
           
            if(x[i] && a[i]){
                
                c+=x[i];
               
            }
        }
        
        return c ;
        
    }
};