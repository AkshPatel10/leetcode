// Last updated: 17/08/2026, 09:32:07
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            mp[key].push_back(strs[i]);
        }

        for (auto pair : mp) {
             ans.push_back(pair.second);
        }

        return ans;
    }
};