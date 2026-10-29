// Last updated: 29/10/2026, 09:16:28
1class Solution {
2public:
3    int coinChange(vector<int>& coins, int amount) {
4        vector<int> dp(amount + 1, amount + 1);
5        dp[0] = 0;
6
7        for (int i = 1; i <= amount; i++) {
8            for (int coin : coins) {
9                if (i >= coin) {
10                    dp[i] = min(dp[i], dp[i - coin] + 1);
11                }
12            }
13        }
14
15        if (dp[amount] == amount + 1)
16            return -1;
17
18        return dp[amount];
19    }
20};