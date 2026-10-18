// Last updated: 18/10/2026, 11:28:08
1class Solution {
2public:
3    int minDeletions(vector<int>& nums) {
4        int deletions = 0;
5        int prev = nums[0];
6
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] == prev) {
9                deletions++;
10            } else {
11                prev = nums[i];
12            }
13        }
14
15        return deletions;
16    }
17};