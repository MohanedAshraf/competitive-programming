static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> v;
        string s1="qwertyuiop" , s2="asdfghjkl" , s3="zxcvbnm";
        for(int i = 0  ; i < words.size()  ; i++){
            int  f1=0 , f2=0 , f3=0 ;
            for(int j = 0 ; j < words[i].size() ; j++){
                
                for(int o = 0 ; o<s1.size() ; o++)
                    if(words[i][j] == s1[o] || words[i][j] == s1[o]-32 )f1++;
                
                for(int o = 0 ; o<s2.size() ; o++)
                    if(words[i][j] == s2[o] || words[i][j] == s2[o]-32 )f2++;
                    
                
                for(int o = 0 ; o<s3.size() ; o++)
                    if(words[i][j] == s3[o] || words[i][j] == s3[o]-32 )f3++;
                    
                
            }
            

            
            if(f1==words[i].size() || f2==words[i].size() || f3==words[i].size()) 
                v.push_back(words[i]);
            
        }
        
        return v;
    }
};