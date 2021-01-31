static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n&1)v.push_back(0);
        for(int i = 1 ;i<n/2+1 ;i++){
            v.push_back(i);
            v.push_back(i*-1);
        }
        
        return v ;
    }
};