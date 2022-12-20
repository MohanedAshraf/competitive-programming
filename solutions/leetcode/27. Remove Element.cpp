class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == val ){
                nums[i]= 101;
                sum++;
            }
        }
        sort(nums.begin() , nums.end());
        return nums.size() - sum ;
    }
};