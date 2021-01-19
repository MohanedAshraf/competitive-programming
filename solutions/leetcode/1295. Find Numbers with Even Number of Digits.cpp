static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum= 0 ;
        for(int i=0 ;i<nums.size() ; i++){
            int x = nums[i], c=0 ;
            while(x>0){
                x/=10;
                c++;
            }
           
            if(c%2==0)sum++;
        }
        
        return sum;
    }
};