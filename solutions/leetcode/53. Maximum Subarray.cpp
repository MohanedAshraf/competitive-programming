class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =  nums.size();
        for(int i = 1 ; i<n ; i++){
            nums[i] += nums[i-1];
        }
        int mx = nums[0] , mn = nums[0];
        for(int i = 0 ; i< n-1 ; i++){
            if(mn > nums[i] && nums[i] < 1){
                mn = nums[i];
            }
            mx = max(mx ,max(nums[i+1] - mn , nums[i+1]) );
        }
        return mx;
    }
};
