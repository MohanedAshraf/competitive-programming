static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int a[n+1][m+1] , sum=0;
        memset(a, 0 , sizeof(a));
        for(int i=0 ; i<indices.size() ; i++){
             for(int j=0; j<m ;j++)
                 a[indices[i][0]][j]++;
             for(int j=0; j<n ;j++)
                 a[j][indices[i][1]]++;
        }
        for(int i=0 ; i<n ; i++)
            for(int j=0; j<m ;j++)
                       if(a[i][j]&1)sum++;
                
    
     return sum;
    }
};