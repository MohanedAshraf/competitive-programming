class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<int , int> m;
        for(int i= 0; i < magazine.size()  ; i++){
            m[magazine[i]]++;
        }
        for(int i= 0; i < ransomNote.size()  ;i++){
            if(m[ransomNote[i]] <= 0) return false;
            m[ransomNote[i]]--;
        }

        return true;
    }
};
