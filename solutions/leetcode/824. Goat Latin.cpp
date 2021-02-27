static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    string toGoatLatin(string S) {
        int a = 0 , n = S.size();
        string x="";
        bool f = 0 , f1= 0;
        char z = ' ' ;
        for(int i= 0 ; i< n ; i++){
            f1=0;
            if(((S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' ) && (i == 0 || S[i-1] == ' ') ) ||                            ((S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U' ) && (i == 0 || S[i-1] == ' ') ) )
                f=1;
           if(i == n-1 ||S[i+1] == ' ' ){
        
             
                   a++;
                   x+=S[i];
                   if(!f && z != ' ')x+= z;
                   z=' ';
                   x+="ma";
                   for(int j = 0 ; j<a ;j++)x+='a';
                   f=0;
                   f1=1;
               }
            
           if(( i==0 || S[i-1] == ' ' ) && !f && !f1)
               z = S[i];
           
            else if(!f1)
                x+=S[i];
            
            
 
                
            
        }
        
        return x ;
    }
};