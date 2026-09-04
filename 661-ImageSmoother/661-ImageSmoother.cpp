// Last updated: 04/09/2026, 10:56:47
1class Solution {
2public:
3    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
4        int n = img.size();
5        int m = img[0].size();
6
7        vector<vector<int>> ans = img;
8
9        for (int i = 0; i < n; i++) {
10            for (int j = 0; j < m; j++) {
11
12                int sum = 0;
13                int count = 0;
14
15                for (int x = i - 1; x <= i + 1; x++) {
16                    for (int y = j - 1; y <= j + 1; y++) {
17
18                        if (x >= 0 && x < n && y >= 0 && y < m) {
19                            sum += img[x][y];
20                            count++;
21                        }
22                    }
23                }
24
25                ans[i][j] = sum / count;
26            }
27        }
28
29        return ans;
30    }
31};