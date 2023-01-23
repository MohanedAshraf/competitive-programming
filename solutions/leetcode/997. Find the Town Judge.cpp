class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        for(int i = 1 ; i <= n ; i++){
            int count = 0;
            for(int j = 0 ; j < trust.size() ; j++){
                if(trust[j][0] == i) { count = 0; break; }
                if(trust[j][1] == i) count++;
            }
            if(count == n-1) return i;
        }

        return -1;
    }
};
