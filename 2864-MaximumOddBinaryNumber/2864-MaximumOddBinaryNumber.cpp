// Last updated: 05/09/2026, 10:08:48
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