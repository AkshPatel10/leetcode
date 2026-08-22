// Last updated: 22/08/2026, 11:09:21
1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i = a.size() - 1;
5        int j = b.size() - 1;
6        int carry = 0;
7
8        string ans = "";
9
10        while (i >= 0 || j >= 0 || carry) {
11
12            int sum = carry;
13
14            if (i >= 0) {
15                sum += a[i] - '0';
16                i--;
17            }
18
19            if (j >= 0) {
20                sum += b[j] - '0';
21                j--;
22            }
23
24            ans += (sum % 2) + '0';
25
26            carry = sum / 2;
27        }
28
29        reverse(ans.begin(), ans.end());
30
31        return ans;
32    }
33};