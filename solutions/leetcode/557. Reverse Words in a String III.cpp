static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string reverseWords(string s) {
        vector<string> v ;
        string res ;
        for(int i = s.size()-1 ; i>=0 ; i--){
            if(i==0){
                res+=s[i];
                v.push_back(res);
            }
            else if( s[i] == ' '){
                v.push_back(res);
                res="";
            }
            else
            res+=s[i];            
        }
        res="";
        for(int i=v.size()-1; i>=0 ; i--){
            if(i==0)
                res+=v[i];
            else
            res+=v[i]+" ";
        }
         
        
        return res;
    }
};