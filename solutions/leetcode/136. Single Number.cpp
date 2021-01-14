static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int ,int> m ;
        for(int i=0 ; i<nums.size() ;i++)
            m[nums[i]]++;
        int res = 0 ;
        for(auto i : m){
            if(i.second == 1){
                res = i.first;
                
            }
                
        }
        
        return res;
    }
};