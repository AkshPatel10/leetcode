// Last updated: 16/10/2026, 09:49:40
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4        int n = code.size();
5        vector<int> res(n, 0);
6
7        if (k == 0)
8            return res;
9
10        for (int i = 0; i < n; i++) {
11            int sum = 0;
12
13            for (int j = 1; j <= abs(k); j++) {
14                if (k > 0)
15                    sum += code[(i + j) % n]; // next elements
16                else
17                    sum += code[(i - j + n) % n]; // previous elements
18            }
19            res[i] = sum;
20        }
21
22        return res;
23    }
24};