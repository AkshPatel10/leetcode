// Last updated: 09/10/2026, 11:20:23
1class Solution {
2public:
3    int theMaximumAchievableX(int num, int t) {
4        int x = num;
5
6        for (int i = 0; i < t; i++) {
7            x += 2;
8        }
9
10        return x;
11    }
12};