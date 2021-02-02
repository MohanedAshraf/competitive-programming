static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = ((nums.size()+1)*(nums.size()))/2 , sum=0;
        for(int i = 0 ; i<nums.size() ; i++)
            sum+=nums[i];
        
        return n - sum;
        
    }
};