class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = 0;
        for(int i = 0; i<timeSeries.size()-1 ; i++){
            if(timeSeries[i] + duration > timeSeries[i+1]){
                sum+=duration;
                int x =  timeSeries[i] + duration - timeSeries[i+1] ;
                sum-=x;
            }
            else
                sum+=duration;
        }
        
        return  sum+duration;
    }
};