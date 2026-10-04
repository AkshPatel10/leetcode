// Last updated: 04/10/2026, 17:42:26
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        vector<string> ans = {""};

        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        for (char digit : digits) {

            string letters = mp[digit - '0'];

            vector<string> temp;

            for (string s : ans) {
                for (char c : letters) {
                    temp.push_back(s + c);
                }
            }

            ans = temp;
        }

        return ans;
    }
};