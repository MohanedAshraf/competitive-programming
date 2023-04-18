class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size() , m = word2.size();
        int i = 0 , j = 0;
        string x = "";
        while(i < n   && j < m ){
            x.push_back(word1[i++]);
            x.push_back(word2[j++]);
        }
        while(i<n)
          x.push_back(word1[i++]);
        while(j<m)
          x.push_back(word2[j++]);

        return x;
    }
};
