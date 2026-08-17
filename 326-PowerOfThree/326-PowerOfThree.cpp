// Last updated: 17/08/2026, 09:30:09
class Solution {
public:
    bool isPowerOfThree(int n) {
       if(n<=0){
        return false;
       }
       while(n%3==0){
        n/=3;
       }
       return n==1;
    }
};