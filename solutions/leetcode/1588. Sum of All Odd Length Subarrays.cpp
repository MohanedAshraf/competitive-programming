static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(int i = 0 ; i<arr.size()  ;i++){
            int x = 0;
            for(int j =i ; j <arr.size() ; j++){
                x+=arr[j];
                if((j-i+1)&1 && (j-i+1) > 0)
                    sum+=x;
                
                
            }
            
        }
        
        return sum ;
    }
};



