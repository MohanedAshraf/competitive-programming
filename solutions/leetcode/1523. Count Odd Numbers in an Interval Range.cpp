class Solution {
public:
    int countOdds(int low, int high) {
        int c = 0;
        if(low & 1)c++;
        if(high & 1)c++;
        if(high & 1 && low & 1){
         if(high == low) return 1;   
            high--;
        }
        c+=(high-low)/2;
        return c;
    }
};
