class Solution {
public:
    int firstBadVersion(int n) {
        int st=0 , end=n;
        while(st<end) {
            int mid = st + (end - st) / 2;
            if(!isBadVersion(mid)){
                st = mid + 1;
            }
            else {
                end = mid;
            }
        }


        return st;
    }
};
