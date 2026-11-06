// Last updated: 06/11/2026, 10:07:03
1
2class Solution {
3public:
4    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
5
6        // sort logs by time
7        sort(logs.begin(), logs.end(), [](auto &a, auto &b) {
8            return a[1] < b[1];
9        });
10
11        // store query time and original idx
12        vector<pair<int, int>> q;
13
14        for(int i = 0; i < queries.size(); i++) {
15            q.push_back({queries[i], i});
16        }
17
18        // sort queries by time
19        sort(q.begin(), q.end());
20
21        vector<int> ans(queries.size());
22        vector<int> freq(n + 1, 0);
23
24        int left = 0, right = 0;
25        int active = 0;
26
27        for(auto [time, index] : q) {
28
29            int start = time - x;
30
31            // remove logs before interval
32            while(left < logs.size() && logs[left][1] < start) {
33                int server = logs[left][0];
34
35                freq[server]--;
36
37                if(freq[server] == 0) {
38                    active--;
39                }
40
41                left++;
42            }
43
44            // add logs inside interval
45            while(right < logs.size() && logs[right][1] <= time) {
46                int server = logs[right][0];
47
48                if(freq[server] == 0) {
49                    active++;
50                }
51
52                freq[server]++;
53                right++;
54            }
55
56            ans[index] = n - active;
57        }
58
59        return ans;
60    }
61};
62