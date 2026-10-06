// Last updated: 06/10/2026, 09:05:55
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        string ans = "";
5
6        for(int i = 0; i < strs[0].size(); i ++){
7            for(int j = 0; j < strs.size(); j++){
8                if(i > strs[j].size() || strs[j][i] != strs[0][i]){
9                    return ans;
10                }
11            }
12            ans += strs[0][i];
13        }
14        return ans;
15    }
16};