// Last updated: 09/09/2026, 14:32:13
class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;

        vector<long long> dp(s.size() + 1);
        vector<int> last(26, -1);

        dp[0] = 1; 

        for (int i = 1; i <= s.size(); i++) {

            dp[i] = (2 * dp[i - 1]) % MOD;

            int ch = s[i - 1] - 'a';

            if (last[ch] != -1) {
                dp[i] = (dp[i] - dp[last[ch] - 1] + MOD) % MOD;
            }

            last[ch] = i;
        }

        return (dp[s.size()] - 1 + MOD) % MOD;
    }
};