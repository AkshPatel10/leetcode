// Last updated: 10/10/2026, 16:29:54
1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4        priority_queue<int> pq;
5
6        for (int num : nums) {
7            pq.push(num);
8        }
9
10        for (int i = 0; i < k - 1; i++) {
11            pq.pop();
12        }
13
14        return pq.top();
15    }
16};