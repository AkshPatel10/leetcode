// Last updated: 17/08/2026, 09:27:44
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1) {

                    count++;
                }
            }
        }

        return count;
    }
};