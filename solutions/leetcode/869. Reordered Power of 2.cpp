class Solution {
public:
    bool reorderedPowerOf2(int N) {
        map<string,bool> m;
        for(int i= 0 ; pow(2,i) <=1000000001 ; i++){
            
            string x = to_string((int)pow(2,i));
            sort(x.begin() ,x.end());
            m[x]=1;
         
        }
        
        string y = to_string(N);
        sort(y.begin() , y.end());
        
        return m[y] ;
                    
        
    }
};