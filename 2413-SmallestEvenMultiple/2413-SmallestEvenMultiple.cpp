// Last updated: 05/09/2026, 10:09:39
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