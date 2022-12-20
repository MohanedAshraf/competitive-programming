class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> x ;
        for(int i = 0 ; i< s.size() ; i++){
            s[i] = tolower(s[i]);
            if((s[i] >= 97 && s[i] <= 122) || (s[i] >= '0' && s[i] <= '9') ){
                x.push_back(s[i]);
            }
        }   
        int  j  = x.size() -1;
        bool f = 1 ;
        for(int  i =  0 ; i < (x.size()+1)/2  ; i++){

            if(x[i] != x[j]){
                f = 0;
                break;
            }

            j--;

        }

        return f; 
    }
};