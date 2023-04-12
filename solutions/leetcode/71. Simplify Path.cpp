class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st ;
        if(path[path.size()-1] != '/') path.push_back('/');

        int n = path.size()  , dots = 0;
        bool slash = 0 ;
        string x = "";
        for(int i = 0 ; i<n ; i++){
            if(path[i] == '/' ){
                if(dots == 2 && x == ""){
            
                    if(!st.empty())
                    st.pop();
                }
                if(dots >=3 || (dots && x != "") ){
                    for(int j = 0 ; j < dots ; j++)
                       x.push_back('.');
                }

              
                dots = 0;
                if(x != "")
                st.push(x);
                x = "";

              
            }
            else if(path[i] == '.') {
                dots++;
            }
            else {
                if(dots){
                    for(int j = 0 ; j < dots ; j++)
                       x.push_back('.');
                    dots = 0;
                }
                   x.push_back(path[i]);
            
            }
        }
        string res = "/";
        stack<string> st2;
        while(!st.empty()){
            string xx = st.top();
            st.pop();
            st2.push(xx);
        }


        while(!st2.empty()){
            res +=  st2.top();
            st2.pop();
            res += "/";
        }
        // reverse(res.begin() , res.end());
        if(res.size() > 1)
        res.pop_back();

        return res;
    }
};
