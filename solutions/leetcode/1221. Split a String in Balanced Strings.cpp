static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int balancedStringSplit(string s) {
        int sum = 0  , c = 0;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='L') sum--;
            else sum ++ ;
            
            if(!sum)c++;
        }
        
        return c ;
    }
};