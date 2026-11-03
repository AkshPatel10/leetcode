// Last updated: 03/11/2026, 10:18:24
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4        int maximum = *max_element(nums.begin(), nums.end());
5        int moves = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] < maximum) {
9                while (nums[i] < maximum) {
10                    nums[i]++;
11                    moves++;
12                }
13            }
14        }
15        return moves;
16    }
17};