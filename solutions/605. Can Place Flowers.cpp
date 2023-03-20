class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m =  flowerbed.size();
        if(m == 1 && flowerbed[0] == 0 && n<=1) return true; 
        for(int i = 0 ; i < m ; i++){
    
            if(i == 0 && i + 1 < m && flowerbed[i] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                n--;
            }

            if(i>0 && i + 1 < m && flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 ){
                flowerbed[i] = 1;
                n--;
            }
        
            if(i>0 && i + 1 == m && flowerbed[i] == 0 && flowerbed[i-1] == 0){
                flowerbed[i] = 1;
                n--;
            }
        

        }

        return n > 0 ? 0 : 1; 
    }
};
