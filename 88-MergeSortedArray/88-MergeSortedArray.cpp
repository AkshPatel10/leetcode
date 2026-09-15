// Last updated: 15/09/2026, 09:06:10
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4
5        int i = m - 1;
6        int j = n - 1;
7        int k = m + n - 1;
8
9        while (i >= 0 && j >= 0) {
10
11            if (nums1[i] > nums2[j]) {
12                nums1[k] = nums1[i];
13                i--;
14            }
15            else {
16                nums1[k] = nums2[j];
17                j--;
18            }
19
20            k--;
21        }
22
23        while (j >= 0) {
24            nums1[k] = nums2[j];
25            j--;
26            k--;
27        }
28    }
29};