static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> v;
        for(int i = 0 ;i<A.size() ; i++)
            if(A[i]%2==0)v.push_back(A[i]);
        for(int i = 0 ;i<A.size() ; i++)
            if(A[i]&1)v.push_back(A[i]);
        
        return v;
    }
};