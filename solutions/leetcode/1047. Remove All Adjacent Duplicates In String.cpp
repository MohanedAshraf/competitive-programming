static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> st;
        string x = "";
        st.push(S[0]);
        for(int i = 1 ; i<S.size() ; i++){
            if( st.empty() || st.top() != S[i])
            st.push(S[i]);
            else 
            st.pop();
        }
       while(!st.empty()){
           x+=st.top();
           st.pop();
       }
         reverse(x.begin() , x.end());
        return x;
        
    }
};