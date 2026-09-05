// Last updated: 05/09/2026, 10:06:59
class Solution {
public:
    int costAt(int r, int c, vector<vector<int>>&grid) {
        return grid[r][c] == 2 ? 1 : grid[r][c];
    }

    

    int solve(int r, int c, vector<vector<int>>& grid, int k, int n, int m, vector<vector<vector<int>>> &dp) {
        if(r >= n || c >= m || costAt(r,c,grid) > k) return -1e3;
        if(r == n-1 && c == m-1) {
            return grid[r][c];
        }

        if(dp[r][c][k] != -1e4) return dp[r][c][k];


        int cost = costAt(r,c,grid);

        return dp[r][c][k] = grid[r][c] + max(solve(r+1,c,grid,k-cost,n,m,dp), solve(r,c+1,grid,k-cost,n,m,dp));
    }

    int maxPathScore(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();

        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(k+1,-1e4)));

        int ans = solve(0,0,grid,k,n,m,dp);

        return ans < 0 ? -1 : ans;
    }
};