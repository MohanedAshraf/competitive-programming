static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int n = A.size() , m = A[0].size();
        vector<vector<int>> B(n , vector<int>(m));
        for(int i= 0 ; i<m ; i++)
            for(int j=m-1 ; j>=0 ; j--)
                B[i][m-j-1]=A[i][j]^1;
        
        
        return B;
        
    }
};