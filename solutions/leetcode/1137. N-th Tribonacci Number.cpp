class Solution {
public:
    int x[40];
    int tribonacci(int n) {
        if(x[n]) return x[n];
        if(n <= 0) return 0;
        if(n <= 2) return 1;
        
        return x[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};
