class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> v(r, vector<int>(c));
        int x= 0 ; 
    if(nums.size() == 0 || nums.size() * nums[0].size()  !=  r*c)
       return nums ;
        
        for(int i =0 ; i<nums.size() ; i++ )
            for(int j = 0 ; j <nums[0].size() ; j++){
                v[x/c][x%c] = nums[i][j];
                x++;
                
            }
        
        return v;
        
        
        
    }
};