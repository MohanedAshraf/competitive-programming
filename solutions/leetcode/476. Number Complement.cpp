static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int findComplement(int num) {
         int b =  floor(log2(num))+1;
         return   pow(2,b)-num-1;
    }
};

