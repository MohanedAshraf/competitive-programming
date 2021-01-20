static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int sum = 0;
        for(int i=0 ; i<s.size() ;i++){
            if(s[i]=='(')st.push(s[i]);
            if(s[i]==')'){
                if(st.size() > sum) sum = st.size();
                st.pop();
            }
        }
        
        return sum ;
        
    }
};