// Last updated: 07/10/2026, 09:02:31
1class Solution {
2public:
3    int longestPalindrome(string s) {
4        int freq[52] = {0};
5
6        for (char c : s) {
7            if (c >= 'a' && c <= 'z')
8                freq[c - 'a']++;
9            else
10                freq[c - 'A' + 26]++;
11        }
12
13        int ans = 0;
14        bool hasOdd = false;
15
16        for (int i = 0; i < 52; i++) {
17            ans += (freq[i] / 2) * 2;
18
19            if (freq[i] % 2 == 1)
20                hasOdd = true;
21        }
22
23        if (hasOdd)
24            ans++;
25
26        return ans;
27    }
28};