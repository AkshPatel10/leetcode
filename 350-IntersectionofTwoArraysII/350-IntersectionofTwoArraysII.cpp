// Last updated: 19/08/2026, 10:13:22
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int, int> freq;
5        vector<int> ans;
6
7        for (auto x : nums1) {
8            freq[x]++;
9        }
10
11        for (int i = 0; i < nums2.size(); i++) {
12            if (freq[nums2[i]] > 0) {
13                ans.push_back(nums2[i]);
14                freq[nums2[i]]--;
15            }
16        }
17        return ans;
18    }
19};