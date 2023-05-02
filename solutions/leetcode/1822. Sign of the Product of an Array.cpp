class Solution {
public:
    int arraySign(vector<int>& nums) {
        int p  = 0 , n = 0 ;
        for(int i =0 ; i< nums.size() ; i++){
            if(!nums[i]) return 0;
            if(nums[i] < 0) n++;    
        }
        return n&1 ? -1 : 1;
    }
};
