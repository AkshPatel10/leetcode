// Last updated: 11/10/2026, 08:10:14
1class Solution {
2public:
3    vector<int> maxPrimes(int n, int s) {
4        vector<bool> isPrime(n+1, true);
5        vector<int> ans;
6
7        long long sum = 0;
8
9        for(int i = 2; i <=n; i++){
10            if(!isPrime[i]){
11                continue;
12            }
13
14            for(long long j = (long long)i * i; j<=n; j+=i){
15                isPrime[j] = false;
16            }
17
18            if(sum + i>s){
19                break;
20            }
21            sum +=i;
22            ans.push_back(i);
23        }
24        return ans;
25    }
26};