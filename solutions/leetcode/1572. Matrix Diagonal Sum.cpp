static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size() , sum = 0 , j=n;
        for(int i = 0 ;i<n ; i++ , j--){
            sum += mat[i][i];
            sum += mat[i][j-1];
        }
        if(n&1){
            sum -= mat[n/2][n/2];
        }
        return sum ;
    }
};