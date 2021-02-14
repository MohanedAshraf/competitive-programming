static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i =0 ; i<s.size() ;i++){
             if(s[i] == 'I' && s[i+1] == 'V'){
                sum+=4;
                i++;
                continue;
            }
            if(s[i] == 'I' && s[i+1] == 'X'){
                sum+=9;
                i++;
                continue;
            }
            if(s[i] == 'X' && s[i+1] == 'L'){
                sum+=40;
                i++;
                continue;
            }
            if(s[i] == 'X' && s[i+1] == 'C'){
                sum+=90;
                i++;
                continue;
            }
            if(s[i] == 'C' && s[i+1] == 'D'){
                sum+=400;
                i++;
                continue;
            }
            if(s[i] == 'C' && s[i+1] == 'M'){
                sum+=900;
                i++;
                continue;
            }
            if(s[i] == 'I')
                sum+=1;
            if(s[i] == 'V')
                sum+=5;
            if(s[i] == 'X')
                sum+=10;
            if(s[i] == 'L')
                sum+=50;
            if(s[i] == 'C')
                sum+=100;
            if(s[i] == 'D')
                sum+=500;
            if(s[i] == 'M')
                sum+=1000;
            
            
        }
        
        return sum;
    }
};