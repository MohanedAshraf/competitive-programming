class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int f[101] = {0};
        for(int i=0 ;i<nums.size() ;i++)
            f[nums[i]]++;
        int c = 0;
        for(int i=0 ;i<101 ;i++){
            if(f[i]>1)
            c+=(f[i]*(f[i] - 1))/2;
        }
        
        return c ;
    }
};