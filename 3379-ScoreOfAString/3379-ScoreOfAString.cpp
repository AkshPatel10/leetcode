// Last updated: 30/08/2026, 10:15:48
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