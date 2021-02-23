static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int sum1 = 0 , sum2 = 0 ;
        for(int i = 0 ; i<s.size()/2 ; i++)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||                  s[i] == 'O' || s[i] == 'U' ) sum1++;
         for(int i = s.size()/2 ; i<s.size() ; i++)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||                  s[i] == 'O' || s[i] == 'U' ) sum2++;
        
        return sum1 == sum2 ;
        
    }
};