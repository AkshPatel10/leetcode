// Last updated: 13/10/2026, 10:21:58
1
2class Solution {
3public:
4    long long maxAlternatingSum(vector<int>& nums) {
5        vector<long long> squares;
6
7        for (int num : nums) {
8            squares.push_back(1LL * num * num);
9        }
10
11        sort(squares.begin(), squares.end());
12
13        long long ans = 0;
14        int n = squares.size();
15
16        for (int i = 0; i < n; i++) {
17            if (i < n / 2) {
18                ans -= squares[i];
19            }
20            else {
21                ans += squares[i];
22            }
23        }
24
25        return ans;
26    }
27};
28