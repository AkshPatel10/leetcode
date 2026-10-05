// Last updated: 05/10/2026, 15:57:05
1class Solution {
2public:
3    void dfs(vector<vector<char>>& grid, int row, int col) {
4
5        if (row < 0 || row >= grid.size() ||
6            col < 0 || col >= grid[0].size() ||
7            grid[row][col] == '0') {
8            return;
9        }
10
11        grid[row][col] = '0';
12
13        dfs(grid, row + 1, col);
14        dfs(grid, row - 1, col);
15        dfs(grid, row, col + 1);
16        dfs(grid, row, col - 1);
17    }
18
19    int numIslands(vector<vector<char>>& grid) {
20        int count = 0;
21
22        for (int i = 0; i < grid.size(); i++) {
23            for (int j = 0; j < grid[0].size(); j++) {
24
25                if (grid[i][j] == '1') {
26                    count++;
27                    dfs(grid, i, j);
28                }
29            }
30        }
31
32        return count;
33    }
34};