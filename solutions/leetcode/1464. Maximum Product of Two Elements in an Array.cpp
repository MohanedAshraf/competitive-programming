static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx1 = 0  , mx2 = 0;
        bool f=0;
        for(int i = 0 ; i < nums.size() ; i++)
            mx1=max(nums[i] , mx1); 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==mx1 && !f){
                f=1;
                continue;
            }
            mx2=max(nums[i] , mx2); 
        }
    
        return (mx1-1)*(mx2-1);
    }
};