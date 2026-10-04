// Last updated: 04/10/2026, 16:45:17
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        if (str1 + str2 != str2 + str1)
            return "";

        int len = gcd(str1.size(), str2.size());

        return str1.substr(0, len);
    }
};