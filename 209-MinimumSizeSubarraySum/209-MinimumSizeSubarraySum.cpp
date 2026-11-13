// Last updated: 13/11/2026, 11:16:16
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int left = 0, sum = 0;
5        int ans = INT_MAX;
6
7        for(int right = 0; right < nums.size(); right++) {
8
9            sum += nums[right];
10
11            while(sum >= target) {
12
13                ans = min(ans, right - left + 1);
14
15                sum -= nums[left];
16
17                left++;
18            }
19        }
20
21        return ans == INT_MAX ? 0 : ans;
22    }
23};