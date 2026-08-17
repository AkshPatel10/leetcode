// Last updated: 17/08/2026, 09:32:09
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = m;

        // Transpose
        for(int i = 0; i < m; i++){
            for(int j = i; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse
        for(int i = 0; i < m; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};