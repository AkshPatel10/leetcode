// Last updated: 10/09/2026, 10:07:07
1class Solution {
2public:
3    bool isHappy(int n) {
4        unordered_set<int> seen;
5
6        while (n != 1) {
7
8            if (seen.count(n))
9                return false;
10
11            seen.insert(n);
12
13            int sum = 0;
14
15            while(n>0){
16                int dig = n %10;
17                sum += dig*dig;
18                n /= 10;
19            }
20            n = sum;
21        }
22
23        return true;
24    }
25};