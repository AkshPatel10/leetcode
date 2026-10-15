// Last updated: 15/10/2026, 11:02:27
1class Solution {
2public:
3    int mirrorDistance(int n) {
4        int org = n;
5        int rev = 0;
6        while (n > 0) {
7            int digit = n % 10;
8            rev = rev * 10 + digit;
9            n = n / 10;
10        }
11        return abs(org - rev);
12    }
13};