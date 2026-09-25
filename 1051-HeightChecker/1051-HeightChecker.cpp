// Last updated: 25/09/2026, 10:35:46
1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4        vector<int> expected = heights;
5
6        sort(expected.begin(), expected.end());
7
8        int count = 0;
9
10        for(int i = 0; i < heights.size(); i++){
11            if(heights[i] != expected[i]){
12                count++;
13            }
14        }
15        return count;
16    }
17};