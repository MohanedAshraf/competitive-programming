#include <algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        map<int , int>  feq; 
         for(int i=0 ; i< n ; i++){
            feq[nums[i]] = i ; 
         }
        vector<int> x;
        vector<vector<int>> v;

        for(int i=0 ; i< n ; ){
            for(int j = i+1 ; j< n ; ){
                int toFind = -(nums[i] + nums[j]);
                if(toFind < nums[j]) break;
                if(toFind == nums[j] && j == feq[toFind]) break;
                if(feq[toFind]){
                    x.clear();
                    x.push_back(nums[i]);
                    x.push_back(nums[j]);
                    x.push_back(toFind);
                    v.push_back(x);
                }
              j=feq[nums[j]]+1;
            }
            i = feq[nums[i]]+1;
        }
        
        return v;

    }
};