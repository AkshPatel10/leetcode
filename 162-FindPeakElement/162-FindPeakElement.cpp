// Last updated: 28/09/2026, 12:59:46
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int low = 0;
5        int high = nums.size() - 1;
6
7        while (low < high) {
8            int mid = low + (high - low) / 2;
9
10            if (nums[mid] < nums[mid + 1]) {
11                low = mid + 1;
12            }
13
14            else{
15                high = mid;
16            }
17        }
18        return low;
19    }
20};