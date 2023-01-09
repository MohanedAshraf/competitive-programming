class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        map<char , int> m;
        for(int i=0 ; i<n ; i++){
            if(m[s[i]-'0']){
                m[s[i]-'0'] = -1;
            }
            else
            m[s[i]-'0'] = i + 1;
        }
        n = INT_MAX;
        for(auto i : m)
            if(i.second != -1)
                n = min(i.second , n);
            
        
        return n == INT_MAX ? -1 : n - 1;
    }
};
