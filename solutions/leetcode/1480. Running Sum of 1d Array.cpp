class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int t =0 ;
        for(int i=0 ; i<nums.size() ;i++){
            t+=nums[i];
            nums[i]=t;
        }
        
        return nums;
    }
};