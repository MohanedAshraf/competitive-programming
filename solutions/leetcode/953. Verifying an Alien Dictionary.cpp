class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char , int > m;
        for(int i = 0 ; i<order.size() ; i++)
            m[order[i]]=i;
        bool f = 1;
        for(int i = 0  ; i<words.size()-1 ; i++){
            for(int j = 0 ; j < words[i].size() ; j++){
                
                if(words[i][j] != words[i+1][j]){   
                
                if(!words[i+1][j] || m[words[i][j]] > m[words[i+1][j]]){
                    f=0;
                    break;
                    }
                    
                    break;
                }
            }
            
        }
        
        
        return f ;
    }
};