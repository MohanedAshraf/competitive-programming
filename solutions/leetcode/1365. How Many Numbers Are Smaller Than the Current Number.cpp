static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v=nums , res;
        int n = nums.size();
        sort(v.begin() , v.end());
        for(int i = 0 ; i<n ; i++)
            res.push_back(lower_bound(v.begin(), v.end(), nums[i])-v.begin());
        
           
        return res;
    }
};