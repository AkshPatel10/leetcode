// Last updated: 21/08/2026, 08:14:12
1class Solution {
2public:
3    int minimumLength(string s) {
4        int left = 0;
5        int right = s.size() - 1;
6
7        while (left < right && s[left] == s[right]) {
8
9            char ch = s[left];
10
11            while (left <= right && s[left] == ch) {
12                left++;
13            }
14
15            while (left <= right && s[right] == ch) {
16                right--;
17            }
18        }
19        return right-left+1;
20    }
21};