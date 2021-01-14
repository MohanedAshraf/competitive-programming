static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int numberOfSteps (int num) {
    int c=0;
    while(num){
        if(num&1)
        num--;    
    
        
        else
            num/=2;
        
    
      c++;
     }
        return c; 
    }
};