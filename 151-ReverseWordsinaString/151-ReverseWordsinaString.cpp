// Last updated: 18/08/2026, 08:56:18
1class Solution {
2public:
3    string reverseWords(string s) {
4        stringstream ss(s);
5        vector<string> words;
6        string word;
7
8        while (ss >> word) {
9            words.push_back(word);
10        }
11
12        reverse(words.begin(), words.end());
13
14        string ans;
15
16        for (int i = 0; i < words.size(); i++) {
17            ans += words[i];
18
19            if (i != words.size() - 1) {
20                ans += " ";
21            }
22        }
23
24        return ans;
25    }
26};