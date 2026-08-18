// Last updated: 18/08/2026, 07:51:59
1class Solution {
2public:
3    string toLowerCase(string s) {
4        for(int i = 0; i < s.size(); i++){
5            if(s[i] >= 'A' && s[i] <= 'Z'){
6                s[i] = s[i] + ('a' - 'A');
7            }
8        }
9        return s;
10    }
11};