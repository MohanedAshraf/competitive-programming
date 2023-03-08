class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1 , end = INT_MAX;
        while(start < end){
            int mid = start + (end - start)/2;
            int sum = 0;
            for(int i =  0 ; i < piles.size() ; i++){
                sum +=  piles[i] /mid;
                sum += piles[i]%mid ? 1 : 0;
            }
            if(mid == 16)
            cout << mid << " " <<sum <<endl;
            if(sum <= h){
                end = mid;
            }
            else {
                start = mid + 1;
            }

          
        }

        return start;
    }
};
