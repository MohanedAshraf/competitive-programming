class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int f[100009]={0} , res=0;
        for(int i=0 ; i<A.size() ;i++){
            if(f[A[i]]>=1){
                res=A[i];
                break;
            }
            f[A[i]]++;
        }
        return res;
    }
};