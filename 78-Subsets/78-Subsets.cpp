// Last updated: 26/08/2026, 10:31:03
1class Solution {
2public:
3    vector<vector<int>> subsets(vector<int>& nums) {
4        vector<vector<int>> ans;
5
6        ans.push_back({});
7
8        for(int num : nums){
9            int size = ans.size();
10
11            for(int i = 0; i < size; i++){
12                vector<int> temp = ans[i];
13
14                temp.push_back(num);
15
16                ans.push_back(temp);
17            }
18        }       
19        return ans; 
20    }
21};