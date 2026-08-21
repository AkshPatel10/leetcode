// Last updated: 21/08/2026, 08:46:25
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size() - 1;
6        int ans = 0;
7
8        while (left < right) {
9
10            int area = (right - left) * min(height[left], height[right]);
11
12            ans = max(ans, area);
13
14            if (height[left] < height[right]) {
15                left++;
16            } else {
17                right--;
18            }
19        }
20
21        return ans;
22    }
23};