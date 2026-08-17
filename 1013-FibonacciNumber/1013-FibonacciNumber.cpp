// Last updated: 17/08/2026, 09:28:56
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;

        int result, prv1 = 1, prv2 = 0;

        for(int i = 2; i<=n; i++){
            result = prv1 + prv2;
            prv2 = prv1;
            prv1 = result;
        }
        return result;
    }
};