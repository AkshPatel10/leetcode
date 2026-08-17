// Last updated: 17/08/2026, 09:25:50
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int number = n;

        while (number % 2 != 0) {
            number += n;
        }

        return number;
    }
};