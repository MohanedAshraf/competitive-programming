class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n = tasks.size() , rounds = 0;
        map<int , int> m;
        for(int i=0 ; i<n  ; i++)
            m[tasks[i]]++;
        
        for(auto i : m){
            if(i.second == 1) return -1;
            if(i.second%3 == 0){
                rounds+=i.second/3;
                continue;
            }
            if(i.second%3 == 1){
                rounds+=i.second/3 -1;
                rounds+=2;
            }
            else{
                rounds+=i.second/3;
                rounds+=1;
            }
        }

        return rounds;
    }
};
