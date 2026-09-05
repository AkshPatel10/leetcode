// Last updated: 05/09/2026, 10:14:11
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;

        for (int i = 0; i < nums.size(); i++) {

            if (lastIndex.find(nums[i]) != lastIndex.end()) {

                if (i - lastIndex[nums[i]] <= k) {
                    return true;
                }
            }

            lastIndex[nums[i]] = i;
        }

        return false;
    }
};