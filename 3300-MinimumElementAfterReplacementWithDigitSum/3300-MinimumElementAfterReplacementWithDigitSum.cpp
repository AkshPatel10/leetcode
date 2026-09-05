// Last updated: 05/09/2026, 10:07:59
class Solution {
public:
    int minElement(vector<int>& nums) {
        int minimum = INT_MAX;

        for(int num : nums){
            int sum = 0;

            while(num > 0){
                // gets last digit
                sum += num%10;

                // removes last digit
                num /= 10;
            }

            minimum = min(minimum, sum);
        }
        return minimum;
    }
};