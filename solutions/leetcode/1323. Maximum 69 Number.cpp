static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int maximum69Number (int num) {
        string s;
        while(num>0){
            s+=(num%10) +'0';
            num/=10;
        }
        reverse(s.begin() , s.end());
        for(int i = 0; i<s.size() ; i++)
            if(s[i] == '6'){
                s[i]= '9';
                break;
            }
        
        return stoi(s);
    }
};