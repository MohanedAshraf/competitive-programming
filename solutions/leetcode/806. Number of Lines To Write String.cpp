static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum = 0 , x = 1 ;
        vector<int> res(2) ;
        for(int i = 0 ; i < s.size() ; i++){
            if(widths[s[i]-'a'] + sum > 100){
                x++;
                sum = widths[s[i]-'a'];
                
            }
            else 
                sum += widths[s[i]-'a'];
            
        }
        res[0]=x;
        res[1]=sum;
            
        return res ;
    }
};