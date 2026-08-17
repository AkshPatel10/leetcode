// Last updated: 17/08/2026, 09:29:07
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;

            string doubled = s+s;

            return doubled.find(goal) != string::npos;
    }
};