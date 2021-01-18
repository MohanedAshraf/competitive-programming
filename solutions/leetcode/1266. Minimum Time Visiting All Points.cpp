static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum = 0;
        for(int i = 0 ; i <points.size()-1 ; i++){
            int x=abs(points[i][0]-points[i+1][0]) , y=abs(points[i][1]-points[i+1][1]);
            sum+=max(x , y);
        }
        
        return sum;
    }
};