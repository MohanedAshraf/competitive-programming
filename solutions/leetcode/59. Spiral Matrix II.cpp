class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1 = 0 , r2 = n - 1 , c1 = 0 , c2 = n - 1 , area = n * n , count = 1;
        vector<vector<int>> v(n , vector<int> (n , 0));
        while(c1<=c2 && r1<=r2){

            for( int c = c1  ; c <= c2 ; c++ )
                v[r1][c] = count++;
            

            for( int r = r1 + 1  ; r <= r2 ; r++ )
                v[r][c2] = count++;
            

            for( int c = c2 -1   ; c  >= c1   ; c-- )
                v[r2][c] = count++;
            

            for( int r = r2 - 1   ; r > r1 ; r-- )
                v[r][c1] = count++;
            
            

            c1++;            
            c2--;
            r1++;
            r2--;

        }


        return v;
    }
};
