static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int hammingDistance(int x, int y) {
        	int count=0;
     while(x>0||y>0){
         int a=x%2;
         int b=y%2;
          x=x/2;
          y=y/2;
         if(a!=b)
            count++;
     }
	return count;
    }
};