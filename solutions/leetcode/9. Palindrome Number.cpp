class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        string s = "";
        while(x > 0){
            int t = x%10;
            s.push_back(t);
            x/=10;
        }

        string ss = s;
        reverse(s.begin( ) , s.end());
        return ss == s;
    }
};