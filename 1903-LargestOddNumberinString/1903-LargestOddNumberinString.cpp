// Last updated: 19/08/2026, 09:50:23
1class Solution {
2public:
3    string largestOddNumber(string num) {
4        for (int i = num.size() - 1; i >= 0; i--) {
5
6            if (num[i]%2 != 0) {
7                return num.substr(0, i + 1);
8            }
9        }
10
11        return "";
12    }
13};