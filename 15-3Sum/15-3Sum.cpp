// Last updated: 01/09/2026, 09:01:25
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        vector<vector<int>> ans;
5
6        sort(nums.begin(), nums.end());
7
8        int n = nums.size();
9
10        for (int i = 0; i < n - 3; i++) {
11
12            if (i > 0 && nums[i] == nums[i - 1])
13                continue;
14
15            for (int j = i + 1; j < n - 2; j++) {
16
17                if (j > i + 1 && nums[j] == nums[j - 1])
18                    continue;
19
20                int l = j + 1;
21                int r = n - 1;
22
23                while (l < r) {
24
25                    long long sum =
26                        (long long)nums[i] + nums[j] +
27                        nums[l] + nums[r];
28
29                    if (sum == target) {
30
31                        ans.push_back({
32                            nums[i], nums[j],
33                            nums[l], nums[r]
34                        });
35
36                        int leftValue = nums[l];
37                        int rightValue = nums[r];
38
39                        while (l < r && nums[l] == leftValue)
40                            l++;
41
42                        while (l < r && nums[r] == rightValue)
43                            r--;
44                    }
45                    else if (sum < target) {
46                        l++;
47                    }
48                    else {
49                        r--;
50                    }
51                }
52            }
53        }
54
55        return ans;
56    }
57};