// Last updated: 05/09/2026, 10:11:32
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int c = accounts[0].size();
        int richest = 0;

        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < c; j++){
                sum += accounts[i][j];
            }
            richest = max(richest, sum);
        }
        return richest;
    }
};