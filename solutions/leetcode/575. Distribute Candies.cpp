static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size()/2;
        set<int> s;
        for(int i = 0; i<n*2 ; i++)
            s.insert(candyType[i]);
        
        return s.size()>=n ? n : s.size();
        
    }
};