// Last updated: 26/08/2026, 10:33:45
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