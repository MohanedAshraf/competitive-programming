class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        vector<int> v;
        vector<int> res;
        int j = 0;
        while(k){
         int x = k %10;
         v.push_back(x);
         k/=10;
        }
        int i = n -1 , carry = 0;
        j=0;
        while(i >= 0 || j <v.size() || carry){
            if (i >= 0 && j<v.size()){
            res.push_back((num[i] + v[j] + carry)%10);
            carry = (num[i--] + v[j++] + carry) / 10;
            }
            else if (i>=0){
            res.push_back((num[i] + 0 + carry)%10);
            carry = (num[i--] + carry) / 10;
            }
            else if (j<v.size()){
            res.push_back((v[j]  + carry)%10);
            carry = (v[j++] + carry) / 10;
            }
            else if(carry){
                res.push_back(carry);
                carry=0;
            }
        }
        reverse(res.begin() , res.end());
        return res;
    }
};
