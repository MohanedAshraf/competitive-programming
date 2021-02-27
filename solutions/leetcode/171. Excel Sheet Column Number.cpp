static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size() , sum = 0;
        for(int i=n-2; i>=0; i--) {
            sum+= (s[i]-'@')*pow(26,((n-1)-i));
        }
        sum+= s[n-1]-'@';
        return sum;
    }
};
