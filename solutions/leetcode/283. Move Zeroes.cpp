static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0 ;
        for (int i = 0; i < nums.size() ; i++){
            if(nums[j] != 0 && j < i )j++;
            if(nums[j] == 0 && nums[i] != 0){
                swap(nums[j] ,nums[i]);
                j++;
            }
        }
        
        
       
    }
};