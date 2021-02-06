static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> v(A); 
        int e = 0 , o = 1;
        for(int i = 0 ;i < A.size() ;i++){
            if(A[i]&1){
                v[o]= A[i];
                o+=2;
            }
            else{
                v[e]= A[i];
                e+=2;
            }
        }
        
        return v;
    }
};