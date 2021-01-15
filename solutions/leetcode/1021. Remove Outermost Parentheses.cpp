static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res ;
        int sum = 1 , idx =0;
        for(int i = 1 ;i < S.size() ;i++){
            if(S[i] == '(')sum++;
            else sum--;
            
            if(!sum){
                S[idx] = '0';
                S[i] = '0';
                idx=i+1;
            }
            
        }
        
        for(int i=0 ; i<S.size() ;i++)
            if(S[i]!='0') res.push_back(S[i]);
        
        return res;
    }
};