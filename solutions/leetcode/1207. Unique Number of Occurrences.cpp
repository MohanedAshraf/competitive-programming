static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int , int > m ;
        set<int> o , s ;
        for(int i = 0; i< arr.size() ; i++){
            m[arr[i]]++;
            s.insert(arr[i]);
        }
        
        for(auto i : m )
            o.insert(i.second);
        
        
        return o.size() == s.size() ;
    }
};