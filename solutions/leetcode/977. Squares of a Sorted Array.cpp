static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]<0)nums[i]*=-1;
            nums[i]*=nums[i];
        }
        
        sort(nums.begin() , nums.end());
        
        return nums;
        
    }
};