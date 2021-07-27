class Solution {
public:
    char findTheDifference(string s, string t) {
        char a ;
        bool f = 0 ;
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        
        for(int i = 0 ;i<s.size() ; i++)
            if(s[i] != t[i]){
                f=1;
                a=t[i];
                break;
            }
       
        if(!f) a = t[t.size()-1];
        
        
        return a; 
    }
};