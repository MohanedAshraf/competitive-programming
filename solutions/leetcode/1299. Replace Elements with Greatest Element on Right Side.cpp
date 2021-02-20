static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx=-1;
        for(int i = arr.size() -1  ; i >=0 ; i-- ){
            int tmp = arr[i];
            arr[i] = mx  ;
            mx = max(mx , tmp);
        }
   
        
        return arr;
    }
};