// Last updated: 27/08/2026, 09:08:45
1class Solution {
2public:
3    string mostCommonWord(string paragraph, vector<string>& banned) {
4
5        unordered_set<string> bannedSet;
6
7        for (string word : banned) {
8            bannedSet.insert(word);
9        }
10
11        for (char &c : paragraph) {
12            if (ispunct(c)) {
13                c = ' ';
14            } else {
15                c = tolower(c);
16            }
17        }
18
19        unordered_map<string, int> freq;
20        stringstream ss(paragraph);
21        string word;
22
23         while (ss >> word) {
24            freq[word]++;
25        }
26
27        string ans;
28        int maxFreq = 0;
29
30        for (auto x : freq) {
31            string word = x.first;
32            int count = x.second;
33
34            if (bannedSet.find(word) == bannedSet.end()) {
35                if (count > maxFreq) {
36                    maxFreq = count;
37                    ans = word;
38                }
39            }
40        }
41
42        return ans;
43    }
44};