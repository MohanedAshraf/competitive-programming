class Solution {
public:
    int removePalindromeSub(string s) {
        string a  = s ;
        bool f=1; 
        for(int i = 0, j=s.size()-1 ; i<s.size() ; j-- , i++)
            if(s[i] != a[j] ){
                f=0;
                break;
            }
       if(!s.size())
         return 0 ;
        else
        return f==1 ?  1 : 2  ;
    }
};