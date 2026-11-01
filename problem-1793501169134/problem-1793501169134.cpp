// Last updated: 01/11/2026, 08:16:09
1class Solution {
2public:
3    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
4        int n = nums.size();
5        int u = 0;
6
7        for(int i = 0; i < n; i++){
8            if(locked[i] == 0){
9                continue;
10            }
11
12            bool must = false;
13
14            if(nums[i] != i+1){
15                must = true;
16            }
17
18            for(int j = 0; j<i; j++){
19                if(nums[j]>nums[i]){
20                    must = true;
21                }
22            }
23            if(must){
24                u++;
25            }
26        }
27
28        if(u>k){
29            return -1;
30        }
31
32        int s = 0;
33
34        for(int i = 0; i < n; i++){
35            for(int j = i+1; j <n; j++){
36                if(nums[i] > nums[j]){
37                    s++;
38                }
39            }
40        }
41        return u +s;
42    }
43};