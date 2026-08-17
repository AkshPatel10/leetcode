// Last updated: 17/08/2026, 09:31:37
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> zeros;
        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        for (auto it : zeros) {
            int zeroRow = it.first;
            int zeroCol = it.second;

            for (int j = 0; j < cols; j++) {
                matrix[zeroRow][j] = 0;
            }
            for (int i = 0; i < rows; i++) {
                matrix[i][zeroCol] = 0;
            }
        }
    }
};