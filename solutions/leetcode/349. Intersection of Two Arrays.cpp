static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s , s1 ;
        vector<int> v;
        for(int i = 0; i<nums1.size() ; i++)
            s.insert(nums1[i]);
        for(int i = 0; i<nums2.size() ; i++)
            s1.insert(nums2[i]);
        int n = s.size();
        for(auto i : s1){
            s.insert(i);
            if(s.size() == n)v.push_back(i);
            else n = s.size(); 
        }
        
     
        
        return v;
        
    }
};