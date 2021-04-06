class Solution {
public:
    int minOperations(int n) {
        vector<int> v;
        int x =0 , op = 0;
        for(int i =0 ; i< n ;i++){
            v.push_back((2*i)+1);
            x+=(2*i)+1;
        }
        x/=n;
        for(int i =0 ; i< n ;i++)
            op+=abs(x-v[i]);
            
        return op/2;
        
    }
};