class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() , m = nums2.size();
        map<int, pair<bool , bool>> mp ;
        for(int i= 0 ; i < n ; i++){
             mp[nums1[i]].first = 1;
             mp[nums1[i]].second = 0;
        }

        for(int i= 0 ; i < m ; i++){
            if(mp[nums2[i]].first >= 1 && !mp[nums2[i]].second ){
                mp.erase(nums2[i]);
                continue;
            }
            mp[nums2[i]].first=1;
            mp[nums2[i]].second = 1;
        }

        for(int i= 0 ; i < n ; i++){
            if(mp[nums1[i]].first >= 1 && mp[nums1[i]].second )
                mp.erase(nums1[i]);
            
        }

        nums1 = vector<int>();
        nums2 = vector<int>();

        vector<vector<int>> res;

        for(auto i : mp){
            if(i.second.first == 1){
                i.second.second ? nums2.push_back(i.first) : nums1.push_back(i.first);
            }
        }

        res.push_back(nums1);
        res.push_back(nums2);

        return res;

    }
};
