// Last updated: 11/11/2026, 10:40:24
1class Solution {
2public:
3    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        int m = matrix[0].size();
6        
7        for(int i = 1; i < n; i++){
8            for(int j = 1; j < m; j++){
9                if(matrix[i][j] != matrix[i-1][j-1]){
10                    return false;
11                }
12            }
13        }
14
15        return true;
16    }
17};