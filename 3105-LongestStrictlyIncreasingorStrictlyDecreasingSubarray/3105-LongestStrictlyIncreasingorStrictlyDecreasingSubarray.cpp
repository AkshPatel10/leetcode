// Last updated: 12/11/2026, 10:52:43
1class Solution {
2public:
3    int longestMonotonicSubarray(vector<int>& nums) {
4        int ans = 1, increasing = 1, decreasing = 1;
5
6        for(int i = 1; i < nums.size(); i++){
7
8            if(nums[i] > nums[i-1]){
9                increasing++;
10            }
11            else{
12                increasing = 1;
13            }
14
15            if(nums[i] < nums[i-1]){
16                decreasing++;
17            }
18            else{
19                decreasing = 1;
20            }
21
22            ans = max(ans, max(increasing, decreasing));
23        }
24
25        return ans;
26    }
27};