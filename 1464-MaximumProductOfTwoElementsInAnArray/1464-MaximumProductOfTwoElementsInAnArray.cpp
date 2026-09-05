// Last updated: 05/09/2026, 10:12:05
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = -1;
        int secondLargest = -1;

        for (int num : nums) {

            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num >= secondLargest) {
                secondLargest = num;
            }
        }

        return (largest-1) * (secondLargest-1);
    }
};