// Last updated: 05/09/2026, 10:11:58
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        string shuffledString(s.size(), ' ');

        for (int i = 0; i < s.size(); i++) {
            shuffledString[indices[i]] = s[i];
        }

        return shuffledString;
    }
};