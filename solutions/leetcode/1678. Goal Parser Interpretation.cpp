static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string interpret(string command) {
        string s ;
        for(int i = 0 ; i< command.size() ;i++){
            if(command[i] == 'G')
                s.push_back('G');
            else if(command[i] == '(' && command[i+1] == ')')
                s.push_back('o');
              else if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')' ){
                s.push_back('a');
                s.push_back('l');
              }
                
                
        }
        
        return s ;
    }
};