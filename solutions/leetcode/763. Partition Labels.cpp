static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v;
        int f[27] = {0} , c=0 ;
        bool vis[27] = {0} , flg = 1;
        for(int i = 0 ; i <s.size() ; i++)
            f[s[i]-'a']++;
        
         for(int i = 0 ; i <s.size() ; i++){
            c++;
            f[s[i]-'a']--;
            vis[s[i]-'a']=1;
             
             for(int j = 0 ; j<=26 ; j++)
                 if(vis[j] && f[j]){
                     flg=0;
                 }
            
                     
            if(flg){
              v.push_back(c);
              c=0;
              memset(vis, 0 , sizeof(vis));
             } 
             flg=1;
             
         }

         return v ;
    }
};