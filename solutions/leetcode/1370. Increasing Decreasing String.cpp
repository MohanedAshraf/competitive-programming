static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string sortString(string s) {
        string v;
        int f[27] = {0} , mx =0 ;
        for(int i = 0 ; i< s.size() ; i++){
            f[s[i]-'a']++;
            mx = max(mx , f[s[i]-'a']);
        }
       while(mx--){
        for(int i = 0 ; i<27 ; i++)
            if(f[i]){
                f[i]--;
                v.push_back(i+'a');
            }
         for(int i = 26 ; i>=0 ; i--)
            if(f[i]){
                f[i]--;
                v.push_back(i+'a');
            }
       }
        
        return v;
    }
};





