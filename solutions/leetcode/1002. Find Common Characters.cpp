static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int f[27] = {0} , ff[27] = {0};
        for(int i=0 ; i<A.size() ; i++ ) {
            
            memset(f, 0, sizeof(f));
            
            for(int j = 0 ; j<A[i].size() ; j++)
                f[A[i][j]-'a']++;
            
            for(int  o = 0 ; o<27 ; o++){
                if(!i) ff[o] = f[o];
               else
                    ff[o]= min(f[o] , ff[o]);
                
            }
            
            
            
            }
        
        vector<string>  v;
        for(int i = 0 ; i<27 ; i++){
             for(int j = 0 ; j < ff[i] ; j++){
                string s;
                 s.push_back(i+'a');
                 v.push_back(s);
             }
              
            
            
            
        }  
            
        
        return v;
        
    }
};