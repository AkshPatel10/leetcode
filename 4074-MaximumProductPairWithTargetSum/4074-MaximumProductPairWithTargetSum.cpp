// Last updated: 20/10/2026, 11:43:59
1class Solution {
2public:
3    vector<int> maxProductPair(vector<int>& nums, int target) {
4         int n = nums.size();
5        int maxProduct = INT_MIN;
6        vector<int> ans = {-1, -1};
7
8        for (int i = 0; i < n; i++) {
9            for (int j = 0; j < n; j++) {
10                if (i != j &&
11                    nums[i] + nums[j] == target &&
12                    nums[i] > nums[j]) {
13
14                    int product = nums[i] * nums[j];
15
16                    if (product > maxProduct) {
17                        maxProduct = product;
18                        ans = {i, j};
19                    }
20                }
21            }
22        }
23
24        return ans;
25    }
26};