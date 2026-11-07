// Last updated: 07/11/2026, 11:34:02
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left = 0;
5        int right = nums.size()-1;
6
7        while(left <= right){
8            int mid = left + (right - left) /2;
9            if(nums[mid] == target){
10                return mid;
11            }
12            else if(nums[mid] < target) {
13                left = mid + 1;
14            }
15            else {
16                right = mid - 1;
17            }
18        }
19        return left;
20    }
21};