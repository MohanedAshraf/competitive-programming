static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int c = 0;
        for(int i = 1 ; i< prices.size() ; i++)
            if(prices[i] > prices[i-1])
            c+=prices[i] - prices[i-1];
        
        return c;
    }
};