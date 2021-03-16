class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int , int> m;
        vector<int> v;
        for(int i = 0 ; i< numbers.size() ; i++)
         m[numbers[i]] = i+1 ;
        for(int i = 0 ; i< numbers.size() ; i++){
            if(m.find(target-numbers[i]) != m.end() ){
                v = {i+1 , m[target - numbers[i]]};
                break;
            }
        }
        
    return v ;
    
    }
};