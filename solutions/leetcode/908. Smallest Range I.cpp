static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mx = 0 , mn = INT_MAX;
        for(int i= 0 ; i<A.size() ; i++){
            mx= max(mx , A[i]);
            mn= min(mn , A[i]);
        }
        int x = mx-mn;
        
        return (x - 2*K) >= 0 ? x - 2*K : 0;
    }
};