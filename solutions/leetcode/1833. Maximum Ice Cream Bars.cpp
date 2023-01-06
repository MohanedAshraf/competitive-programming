class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum = 0;
        sort(costs.begin() , costs.end());
        for(int i = 0 ; i < costs.size() ; i++){
            coins -= costs[i];
            sum++;
            if(coins <= 0)break; 
        }
        return coins >= 0 ? sum : --sum;
    }
};
