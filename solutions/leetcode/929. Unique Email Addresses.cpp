static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(int i=0 ; i<emails.size() ; i++){
            string x;
            bool f = 0  , a=0;
            for(int j = 0 ; j< emails[i].size()  ; j++){
                if(emails[i][j] == '@')a=1;
                if(!a){
                    if (emails[i][j] == '+') f=1;
                    else if(emails[i][j]!='.' && !f)x.push_back(emails[i][j]);
                }
                else 
                    x.push_back(emails[i][j]);
            }
            s.insert(x);
        }
        
        
        return  s.size();
    }
};