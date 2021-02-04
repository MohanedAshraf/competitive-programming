static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        
        return s == t ;
        
    }
};