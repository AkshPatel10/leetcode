// Last updated: 11/09/2026, 10:58:56
1class Solution {
2public:
3    string gcdOfStrings(string str1, string str2) {
4
5        if (str1 + str2 != str2 + str1)
6            return "";
7
8        int len = gcd(str1.size(), str2.size());
9
10        return str1.substr(0, len);
11    }
12};