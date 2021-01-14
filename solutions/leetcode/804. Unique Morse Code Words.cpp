static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
          vector<string> codes{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s ;
        for(int i=0 ; i<words.size() ; i++){
            string x ;
            for(int j = 0 ; j < words[i].size() ; j++){
                x+=codes[words[i][j] - 97];
            }
            
            s.insert(x);
        }
        
        
        return s.size();
    }
};