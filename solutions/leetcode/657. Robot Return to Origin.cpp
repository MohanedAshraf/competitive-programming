static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    bool judgeCircle(string moves) {
        int h = 0 , v=0;
        for(int i = 0 ; i<moves.size() ;i++){
            if(moves[i] == 'L')h--;
            if(moves[i] == 'R')h++;
            if(moves[i] == 'U')v++;;
            if(moves[i] == 'D')v--;
            
        }
        
        return v==0 && h==0;
    }
};