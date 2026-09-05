// Last updated: 05/09/2026, 10:09:43
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;
        int n = grid.size();
        int ans = 0;

        // storing rows
        for (auto row : grid) {
            mp[row]++;
        }

        // building each col
        for (int i = 0; i < n; i++) {
            vector<int> col;
            for (int j = 0; j < n; j++) {
                col.push_back(grid[j][i]);
            }
            ans += mp[col];
        }
        return ans;
    }
};