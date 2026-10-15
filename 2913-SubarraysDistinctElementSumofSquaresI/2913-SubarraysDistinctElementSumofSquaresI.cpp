// Last updated: 15/10/2026, 10:52:41
1class Solution {
2public:
3    int sumCounts(vector<int>& nums) {
4        int ans = 0;
5        int n = nums.size();
6
7        for (int i = 0; i < n; i++) {
8            unordered_set<int> st;
9            for (int j = i; j < n; j++) {
10                st.insert(nums[j]);
11
12                ans += st.size() * st.size();
13            }
14        }
15        return ans;
16    }
17};