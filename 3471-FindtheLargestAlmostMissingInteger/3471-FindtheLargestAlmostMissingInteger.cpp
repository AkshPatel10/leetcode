// Last updated: 25/09/2026, 10:23:15
1class Solution {
2public:
3    int largestInteger(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        unordered_map<int, int> count;
7
8        for (int i = 0; i <= n - k; i++) {
9            unordered_set<int> seen;
10            for (int j = i; j < i + k; j++) {
11                seen.insert(nums[j]);
12            }
13
14            for (int x : seen) {
15                count[x]++;
16            }
17        }
18
19        int ans = -1;
20
21        for (auto [num, cnt] : count) {
22            if (cnt == 1) {
23                ans = max(ans, num);
24            }
25        }
26
27        return ans;
28    }
29};