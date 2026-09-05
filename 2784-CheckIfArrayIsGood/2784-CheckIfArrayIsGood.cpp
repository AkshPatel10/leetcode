// Last updated: 05/09/2026, 10:09:02
class Solution {
public:
    bool isGood(vector<int>& nums) {

        int maxi = *max_element(nums.begin(), nums.end());
        if (nums.size() != maxi + 1) {
            return false;
        }

        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        for (int i = 1; i <= maxi; i++) {
            if (i == maxi) {
                if (freq[i] != 2) {
                    return false;
                }
            } else {
                if (freq[i] != 1) {
                    return false;
                }
            }
        }
        return true;
    }
};