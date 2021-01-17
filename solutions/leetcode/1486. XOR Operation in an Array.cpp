static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int xorOperation(int n, int start) {
        int sum = start; 
        for(int i = 1 ; i<n ;i++)
            sum^=(start + 2*i);
        
        
        return sum ;
    }
};