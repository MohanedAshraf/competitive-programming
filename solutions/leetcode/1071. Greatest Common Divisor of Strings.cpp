class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 =  str1.size() , n2 = str2.size();
        if(n1 > n2){
            int tmp = n1 ;
            n1 = n2;
            n2 = tmp;
        }
        if(n1 != str1.size()){
            string tmp = str1 ;
            str1 = str2;
            str2 = tmp;
        }
        bool f = 1;
        string res = str1;
        while(f && res.size() > 0){

            if(n2 % res.size() != 0){
                res.pop_back();
                continue;
            }
    
            string x = res;
            for(int i = 0 ; res.size() <= n2 ; i++){
                if(res == str2){
                    f = 0;
                    break;
                }
                res += x;
            }
            res = x ;
            if(!f){
            for(int i = 0 ; res.size() <= n1 ; i++){
                if(res == str1){
                    f = 0;
                    return x;
                }
                res += x;
                }   
            }
            f=1;
            res = x;
            res.pop_back();
        }




        return res;
        
    }
};
