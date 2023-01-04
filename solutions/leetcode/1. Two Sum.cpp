class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int , int> m;
        vector<int> v;
        for(int i=0 ; i<n ; i++){
          if(m[target - nums[i]]){
              v.push_back(i);
              v.push_back(m[target - nums[i]] - 1);
              return v;
          }
          m[nums[i]] = i+1;
        }

        return v;
    }
};
