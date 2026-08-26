// Last updated: 26/08/2026, 10:34:34
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<string> ans;

        for (string word : words) {

            string original = word;

            for (char &c : word) {
                c = tolower(c);
            }

            string row;

            if (row1.find(word[0]) != string::npos)
                row = row1;
            else if (row2.find(word[0]) != string::npos)
                row = row2;
            else
                row = row3;

            bool valid = true;

            for (char c : word) {
                if (row.find(c) == string::npos) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans.push_back(original);
        }

        return ans;
    }
};