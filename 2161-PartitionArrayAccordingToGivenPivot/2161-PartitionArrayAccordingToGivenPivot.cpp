// Last updated: 09/09/2026, 13:53:48
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;

        // smaller
        for (int x : nums) {
            if (x < pivot)
                ans.push_back(x);
        }

        // equal
        for (int x : nums) {
            if (x == pivot)
                ans.push_back(x);
        }

        // greater
        for (int x : nums) {
            if (x > pivot)
                ans.push_back(x);
        }

        return ans;
    }
};