static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums[0] , c=1 , mx=0;
        for(int i = 1; i<nums.size() ;i++){
            if(nums[i-1] == nums[i])
                c++;
              
            else{
                if(c>=mx){
                    mx=c;
                    n=nums[i-1];
                    
                }
                c=1;
            }
        }
        if(c>=mx){
           mx=c;
           n=nums[nums.size()-1];     
         }
        return n ;
        
    }
};