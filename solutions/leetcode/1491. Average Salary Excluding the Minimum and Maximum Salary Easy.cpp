class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size() , mn = INT_MAX , mx = 0 , sum = 0 ;

        for(int i = 0 ; i < n ; i++){
            mn = min(mn , salary[i]);
            mx = max(mx , salary[i]);
            sum += salary[i];
        }
        n-=2;
        sum-=(mn + mx);
        return double((double)sum /  (double)n);
    }
};
