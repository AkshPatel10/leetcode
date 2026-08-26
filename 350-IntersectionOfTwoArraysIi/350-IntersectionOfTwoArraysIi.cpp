// Last updated: 26/08/2026, 10:34:44
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> ans;

        for (auto x : nums1) {
            freq[x]++;
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (freq[nums2[i]] > 0) {
                ans.push_back(nums2[i]);
                freq[nums2[i]]--;
            }
        }
        return ans;
    }
};