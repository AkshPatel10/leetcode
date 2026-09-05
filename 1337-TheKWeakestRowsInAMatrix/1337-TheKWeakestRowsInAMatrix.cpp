// Last updated: 05/09/2026, 10:12:24
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<pair<int, int>> v;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int soldiers = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    soldiers++;
                }
            }
            v.push_back({soldiers, i});
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};