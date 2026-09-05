// Last updated: 05/09/2026, 10:09:36
class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int maxi = 0;

        for (int i = 0; i <= rows - 3; i++) {
            int sum = 0;
            for (int j = 0; j <= cols - 3; j++) {
                sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2] +
                      grid[i + 1][j + 1] + grid[i + 2][j] + grid[i + 2][j + 1] +
                      grid[i + 2][j + 2];
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};