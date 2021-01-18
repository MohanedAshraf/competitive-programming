static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool f[27]={0};
        for(int i=0 ;i<allowed.size() ;i++)
            f[allowed[i]-'a']=1;
        int sum=0;
        for(int i=0 ;i<words.size() ;i++){
             bool flg=1;
             for(int j = 0;j<words[i].size() ; j++)
                if(!f[words[i][j]-'a']){
                    flg=0;
                    break;
                }
                    
            if(flg)
            sum++; 
        
    }
    return  sum;
  }
};