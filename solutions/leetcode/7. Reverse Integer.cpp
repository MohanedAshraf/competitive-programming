static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int reverse(long long int x) {
        if(x == 0) return 0 ;
        long long int y=0;
        bool neg = 0 ;
        if(x<0){
            neg =1;
            x*=-1;
        }
        while(x>0){
            y*=10;
            int z= x%10;
            x/=10;
            y+=z;
            if(y>pow(2,31)-1)return 0;
            
        }

        return neg ? y *-1 : y;
    }
};


