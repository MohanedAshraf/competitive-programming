static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int sum = 0 ;
        for(int i = 0 ; i < startTime.size() ; i++)
            if(startTime[i] <= queryTime && endTime[i] >= queryTime)sum++;
            
        return sum ;
    }
};