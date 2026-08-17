// Last updated: 17/08/2026, 09:27:08
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> freq;
        int sum = 0;

        for (int num : nums) {
            freq[num]++;
        }

        for (int num : nums) {
            if (freq[num] == 1) {
                sum += num;
            }
        }

        return sum;
    }
};