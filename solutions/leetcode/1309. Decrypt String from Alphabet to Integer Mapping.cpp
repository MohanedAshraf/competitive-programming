static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string freqAlphabets(string s) {
        string res ="";
        for(int i = s.size()-1 ; i >= 0 ; i--){
            if(s[i] == '#'){
                res =(char) ('a'+ stoi(s.substr(i-2  , 2))-1) + res;
                i-=2;
            }
            else 
                res = (char) ('a' + ((s[i]-'0') -1)) + res;
               
        }
        
        return res ;
    }
};