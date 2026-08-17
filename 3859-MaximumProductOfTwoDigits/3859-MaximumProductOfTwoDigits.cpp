// Last updated: 17/08/2026, 09:23:46
class Solution {
public:
    int maxProduct(int n) {
        int largest = -1;
        int secondLargest = -1;

        while (n > 0) {
            int digit = n % 10;
            if(digit >= largest){
                secondLargest = largest;
                largest = digit;
            }
            else if(digit >= secondLargest){
                secondLargest = digit;
            }
            n /= 10;
        }

        return largest * secondLargest;
    }
};