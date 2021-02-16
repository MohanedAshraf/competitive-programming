static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string , string> m ;
        
        for(int i = 0  ; i < paths.size() ; i++)
            m[paths[i][0]] = paths[i][1];
        string x = paths[0][1];
        cout<<m[x]<<endl;
        for(int i = 1 ; i<paths.size() ; i++){
            if(m[x] != "")
            x = m[x];
            else 
                break;
            
        }
         
               
        
        
        return x ;
        
         
    }
};