class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ; i<s.size() ; i++){
            char z='#';
            if(!st.empty())
             z = st.top();  
            st.push(s[i]);   
         
            if((z == '(' &&  s[i] == ')')  || (z == '[' &&  s[i] == ']')  || (z == '{' &&  s[i] == '}' )){
                st.pop();
                st.pop();
            }
            
        
            
        }
        
    if(!st.empty())return false;
        
        return true;
        
    }
};



