class Solution {
public:
    bool detectCapitalUse(string word) {
        bool f = 0;
        string x = "";
        for(int i =0 ; i<word.size() ; i++)
            x+=tolower(word[i]);
        if(word == x) f=1;
        x[0] = toupper(x[0]);
        if(word == x) f=1;
        for(int i =0 ; i<word.size() ; i++)
            x[i] = toupper(x[i]);
         if(word == x) f=1;

          return f;
    }
};
