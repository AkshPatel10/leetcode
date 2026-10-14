// Last updated: 14/10/2026, 16:07:02
1class Solution {
2public:
3    string maxSumOfSquares(int num, int sum) {
4         if (sum > 9 * num || sum == 0)
5            return "";
6
7        string ans = "";
8
9        for (int i = 0; i < num; i++) {
10            if (sum >= 9) {
11                ans += '9';
12                sum -= 9;
13            }
14            else {
15                ans += char('0' + sum);
16                sum = 0;
17            }
18        }
19
20        return ans;
21    }
22};