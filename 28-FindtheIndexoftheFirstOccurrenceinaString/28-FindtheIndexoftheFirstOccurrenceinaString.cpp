// Last updated: 04/11/2026, 10:36:07
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int m = haystack.length();
5        int n = needle.length();
6
7        for(int i = 0; i < m; i++){
8            for(int j = 0; j < n; j++){
9                if(haystack[i+j] != needle[j]) break;
10
11                if(j == n-1) return i;
12            }
13        }
14        return -1;
15    }
16};