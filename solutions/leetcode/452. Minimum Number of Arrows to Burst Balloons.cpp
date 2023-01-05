class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end());
        int sum = 0 , start = -1 , end = -1 ;
        for(auto i : points){            
            cout << i[0] << " "<< i[1] <<endl;
            if(i[0] >= start &&  i[0] <= end){
                start = max(start , i[0]);
                end = min(end , i[1]);
            }
            else{
                sum++;
                start = i[0];
                end = i[1];
            }
        }

        return sum;
    }
};
