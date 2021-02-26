static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size()  , m = matrix[0].size();
        bool f = 1;
        for(int i = 1 ; i <n ; i++)
            for(int j = 1 ; j<m ; j++)
                if(matrix[i][j] != matrix[i-1][j-1] ){
                    f=0;
                    break;
                }
            
                                        
                
            
            
        return f ;
    }
};