class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size() , m = matrix[0].size();
        int st = 0 , end = n - 1 , row = -1;
        while(st < end){
            int mid = st + floor((end-st+1)/2);
            if (target < matrix[mid][0]){
                end = mid -1;
            }
            else {
                st = mid;
            }
        }
        row = st;
        st = 0 ;
        end = m - 1;

        while(st < end){
            int mid = st + floor((end-st+1)/2);
            if (target < matrix[row][mid]){
                end = mid -1;
            }
            else {
                st = mid;
            }
        }

        return matrix[row][st] == target;
    }
};
