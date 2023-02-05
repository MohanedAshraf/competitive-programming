class Solution {
public:
    bool isPerm(vector<int> &a , vector<int> &b){
        
        for(int i = 0 ;  i< 26 ; i++){
            if(a[i] != b[i])
            return false;
        }

        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n1 = p.size();
        int n2 = s.size();
        if(n2<n1) return res;
        vector<int> fq1(26) , fq2(26);
        for(int i=0 ; i<n1 ;i++){
            fq1[p[i] - 'a']++;
            fq2[s[i] - 'a']++;
        }

        for(int  i = 0 ; i < n2 - n1 ;i++){
            if(isPerm(fq1 , fq2)){
                res.push_back(i);
            }

            fq2[s[i] - 'a']--;
            fq2[s[i + n1] - 'a']++;
        }

        if(isPerm(fq1 , fq2)) res.push_back(n2-n1);
        

        return res;
    }

};
