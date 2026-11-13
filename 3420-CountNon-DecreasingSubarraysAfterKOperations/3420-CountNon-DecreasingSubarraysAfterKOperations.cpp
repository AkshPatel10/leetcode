// Last updated: 13/11/2026, 11:32:58
1class Solution {
2public:
3    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
4        int n = nums.size();
5        long long ans = 0, cost = 0;
6
7        deque<int> dq;
8        int right = n - 1;
9
10        for(int left = n - 1; left >= 0; left--) {
11
12            while(!dq.empty() && nums[dq.back()] < nums[left]) {
13                int idx = dq.back();
14                dq.pop_back();
15
16                int end = dq.empty() ? right + 1 : dq.back();
17
18                cost += 1LL * (end - idx) * (nums[left] - nums[idx]);
19            }
20
21            dq.push_back(left);
22
23            while(cost > k) {
24                cost -= nums[dq.front()] - nums[right];
25
26                if(dq.front() == right) {
27                    dq.pop_front();
28                }
29
30                right--;
31            }
32
33            ans += right - left + 1;
34        }
35
36        return ans;
37    }
38};