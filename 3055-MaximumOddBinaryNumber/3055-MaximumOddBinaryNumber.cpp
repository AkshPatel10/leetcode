// Last updated: 23/08/2026, 13:25:42
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;

        for (char c : s) {
            if (c == '1')
                ones++;
        }

        string result;

        result += string(ones - 1, '1');
        result += string(s.size() - ones, '0');
        result += '1';

        return result;
    }
};