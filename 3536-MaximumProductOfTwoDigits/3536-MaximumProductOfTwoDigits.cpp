// Last updated: 05/09/2026, 10:07:32
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