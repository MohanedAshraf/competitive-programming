static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
        return fib(n-1) + fib(n-2);
    }
};