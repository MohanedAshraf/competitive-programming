class Solution {
public:
    bool isPrime(int n){
        if(n==2 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==19)return 1;
        return 0;
    }
    
    int countPrimeSetBits(int L, int R) {
        int sum = 0;
        for(int i =L ; i<=R ; i++){
            int n=0 ,x = i;
            while (x) {
             n += x & 1;
             x >>= 1;
             }
            if(isPrime(n))sum++;
        }
        
        return sum;
    }
};