static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c = 0 , x=n;
        while(n>0){
            n/=2;
            c++;
        }
        
        return pow(2,c-1) == x ? true : false ;
    }
};