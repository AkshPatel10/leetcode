// Last updated: 05/09/2026, 10:08:23
class Solution {
public:
    int scoreOfString(string s) {
        int sc = 0;
        int n = s.size()-1;

        for(int i = 0; i < n; i++){
            sc += abs(s[i] - s[i+1]);
        }

        return sc;
    }
};