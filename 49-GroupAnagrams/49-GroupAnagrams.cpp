// Last updated: 22/09/2026, 20:13:54
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mp;
5        vector<vector<string>> ans;
6
7        for (int i = 0; i < strs.size(); i++) {
8            string key = strs[i];
9            sort(key.begin(), key.end());
10            mp[key].push_back(strs[i]);
11        }
12
13        for (auto pair : mp) {
14             ans.push_back(pair.second);
15        }
16
17        return ans;
18    }
19};