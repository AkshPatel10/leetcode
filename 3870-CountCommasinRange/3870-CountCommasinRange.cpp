// Last updated: 16/09/2026, 09:00:56
1class Solution {
2public:
3    long long countCommas(long long n) {
4        long long ans = 0;
5
6        if (n >= 1000) {
7            ans += n - 1000 + 1;
8        }
9
10        if (n >= 1000000) {
11            ans += (n - 1000000 + 1);
12        }
13
14        if (n >= 1000000000) {
15            ans += (n - 1000000000 + 1);
16        }
17
18        return ans;
19    }
20};