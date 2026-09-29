// Last updated: 29/09/2026, 11:18:16
1class Solution {
2public:
3    bool validMountainArray(vector<int>& arr) {
4        int n = arr.size();
5
6        if (n < 3)
7            return false;
8
9        int i = 0;
10
11        // increasing
12        while (i + 1 < n && arr[i] < arr[i + 1]) {
13            i++;
14        }
15
16        // if peak is first or last
17        if (i == 0 || i == n - 1)
18            return false;
19
20        // decreasing 
21        while (i + 1 < n && arr[i] > arr[i + 1]) {
22            i++;
23        }
24
25        return i == n - 1;
26    }
27};