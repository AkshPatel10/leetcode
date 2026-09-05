// Last updated: 05/09/2026, 10:07:20
class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int prod = 1;

        while(temp > 0){
            int digit = temp % 10;
            
            sum += digit;
            prod *= digit;

            temp /= 10;
        }

        return n % (sum + prod) == 0;
    }
};