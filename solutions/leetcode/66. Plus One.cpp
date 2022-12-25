class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = 1;
        for(int i = digits.size() - 1 ; i>=0 ; i--){
            if(digits[i] == 9){
                if(x)
                digits[i] = 0;
            continue;
            }
            else{
                if(x){
                digits[i]+=x;
                x--;
                }
            
            }
        }
        if(x){
            vector<int>v;
            v.push_back(1);
            for(int i = 0; i<digits.size() ; i++)
                v.push_back(0);
            return v;
        }

        return digits;
    }
};