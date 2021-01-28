static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i = 0 ; i< nums1.size()  ; i++){
            auto itr =  find(nums2.begin() , nums2.end() , nums1[i]);
            bool f=0;
            for(int j=  itr-nums2.begin() ; j <nums2.size() ; j++ )
                if(nums2[j]>nums1[i]){
                    f=1;
                    v.push_back(nums2[j]);
                    break;
                   
                }
            
            if(!f)
               v.push_back(-1); 
                      
        }
        
        
        return v;
    }
};