// Last updated: 08/10/2026, 09:08:26
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        int depth = 0;
5        string ans = "";
6
7        for (char c : s) {
8            if (c == '(') {
9                depth++;
10
11                if (depth > 1) {
12                    ans += c;
13                }
14            } else {
15                if (depth > 1) {
16                    ans += c;
17                }
18                depth--;
19            }
20        }
21        return ans;
22    }
23};