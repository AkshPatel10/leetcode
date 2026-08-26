// Last updated: 26/08/2026, 10:34:21
class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + ('a' - 'A');
            }
        }
        return s;
    }
};