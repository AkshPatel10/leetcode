// Last updated: 20/08/2026, 08:02:32
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4
5        if (needle.size() > haystack.size()) {
6            return -1;
7        }
8
9        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
10
11            bool found = true;
12
13            for (int j = 0; j < needle.size(); j++) {
14
15                if (haystack[i + j] != needle[j]) {
16                    found = false;
17                    break;
18                }
19            }
20
21            if (found) {
22                return i;
23            }
24        }
25
26        return -1;
27    }
28};