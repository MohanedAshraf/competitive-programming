static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int calPoints(vector<string>& ops) {
       int sum=0;
        stack<int> st;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                st.pop();
            }
            else if(ops[i]=="D")
                st.push(2*st.top());
            
            else if(ops[i]=="+"){
                int x=st.top();
                int s=st.top()+x;
                st.push(x);
                st.push(s);
            }
            else{
                st.push(stoi(ops[i]));
            }
        }
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};