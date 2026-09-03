// Last updated: 03/09/2026, 08:08:49
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int left = 0;
5        int right = s.size() - 1;
6
7        while (left < right) {
8            swap(s[left], s[right]);
9
10            left++;
11            right--;
12        }
13    }
14};