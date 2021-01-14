static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        for(int i=0 ;i <n ;i++){
           v.push_back(nums[i]);
           v.push_back(nums[n+i]);
        }
        
        return v;
    }
};