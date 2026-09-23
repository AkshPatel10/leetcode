// Last updated: 23/09/2026, 11:25:30
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int x) {
4        int n = nums.size();
5        int total = 0;
6
7        for (int num : nums) {
8            total += num;
9        }
10
11        int target = total - x;
12
13        if (target < 0)
14            return -1;
15
16        int left = 0;
17        int sum = 0;
18        int maxLen = -1;
19
20        for (int right = 0; right < n; right++) {
21            sum += nums[right];
22
23            while (sum > target) {
24                sum -= nums[left];
25                left++;
26            }
27
28            if (sum == target) {
29                maxLen = max(maxLen, right - left + 1);
30            }
31        }
32
33        if (maxLen == -1)
34            return -1;
35
36        return n - maxLen;
37    }
38};