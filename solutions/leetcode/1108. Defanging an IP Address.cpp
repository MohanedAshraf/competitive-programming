static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string defangIPaddr(string address) {
        string a ;
        for(int i = 0 ; i< address.size() ; i++){
            if(address[i] == '.'){
                a.push_back('[');
                a.push_back('.');
                a.push_back(']');
            }
            else
                a.push_back(address[i]);
            
        }
        
        return a;
    }
};