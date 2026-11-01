// Last updated: 01/11/2026, 08:05:06
1class Solution {
2public:
3    int minMergedInteger(vector<int>& nums) {
4      int n = nums.size();
5      int ans = INT_MAX;
6        for(int i = 0; i < n; i +=2){
7            string first = to_string(nums[i]);
8            string second = to_string(nums[i+1]);
9
10            string merged = first + second;
11
12            int val = stoi(merged);
13
14            if(val < ans){
15                ans = val;
16            }
17        }
18        return ans;
19    }
20};