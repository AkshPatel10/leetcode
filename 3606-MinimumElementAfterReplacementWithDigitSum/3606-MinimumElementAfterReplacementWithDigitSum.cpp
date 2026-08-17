// Last updated: 17/08/2026, 09:24:15
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