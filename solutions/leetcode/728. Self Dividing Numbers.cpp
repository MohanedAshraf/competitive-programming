static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v ;
        for(int i=left ; i<= right ; i++){
            bool f=1;
            int x = i;
            while (x>0){
                int z = x%10;
                if(z == 0 || i%z != 0 ){
                    f = 0;
                    break;
                }
                x/=10;
                
            }
            if(f)v.push_back(i);
        }
        return v;
    }
};