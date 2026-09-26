// Last updated: 26/09/2026, 21:31:14
1class Solution {
2public:
3    string evaluate(string s, vector<vector<string>>& knowledge) {
4        unordered_map<string, string> mp;
5
6        for (auto k : knowledge) {
7            mp[k[0]] = k[1];
8        }
9
10        string ans = "";
11
12        for (int i = 0; i < s.size(); i++) {
13
14            if (s[i] != '(') {
15                ans += s[i];
16            }
17            else {
18                int j = i + 1;
19
20                while (s[j] != ')') {
21                    j++;
22                }
23
24                string key = s.substr(i + 1, j - i - 1);
25
26                if (mp.count(key)) {
27                    ans += mp[key];
28                }
29                else {
30                    ans += "?";
31                }
32
33                i = j;
34            }
35        }
36
37        return ans;
38    }
39};