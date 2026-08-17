// Last updated: 17/08/2026, 09:29:30
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans = 0;

        for (auto num : nums) {
            freq[num]++;
        }

        for (auto num : freq) {
            int x = num.first;

            if (freq.find(x + 1) != freq.end()) {
                ans = max(ans, num.second + freq[x + 1]);
            }
        }

        return ans;
    }
};