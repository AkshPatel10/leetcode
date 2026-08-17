// Last updated: 17/08/2026, 09:31:41
class Solution {
public:
    int mySqrt(int x) {
        long i = 0;

        while(i*i <=x){
            i++;
        }
        return i-1;
    }
};