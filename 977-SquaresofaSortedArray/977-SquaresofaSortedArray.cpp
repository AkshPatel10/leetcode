// Last updated: 21/08/2026, 07:23:26
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<int> ans(n);
7
8        int left = 0;
9        int right = n - 1;
10
11        for (int i = n - 1; i >= 0; i--) {
12
13            if (abs(nums[left]) > abs(nums[right])) {
14                ans[i] = nums[left] * nums[left];
15                left++;
16            }
17            else {
18                ans[i] = nums[right] * nums[right];
19                right--;
20            }
21        }
22
23        return ans;
24    }
25};