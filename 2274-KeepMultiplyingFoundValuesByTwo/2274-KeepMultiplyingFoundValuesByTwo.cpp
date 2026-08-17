// Last updated: 17/08/2026, 09:25:56
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> s(nums.begin(), nums.end());

        while(s.count(original)){
            original *= 2;
        }
        return original;
    }
};