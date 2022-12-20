class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n =  strs.size();
        int m = strs[0].size() , mn = 200;

        for(int i = 0 ; i<n ; i++){
            if(mn >= strs[i].size())
            mn = strs[0].size();
        }
        int j = 0;
        string result = "";
            while(mn--) {
                bool f = 1;
                for(int k = 1 ; k < n ; k++){
                    if(strs[k][j] != strs[k-1][j]){
                        f=0;
                        break;
                    }
                }

                if(!f)
                    break;

                result.push_back(strs[0][j]);
                j++;
            }



            return result;
        }



};