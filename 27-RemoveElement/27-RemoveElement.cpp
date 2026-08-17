// Last updated: 17/08/2026, 09:32:32
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int last = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};