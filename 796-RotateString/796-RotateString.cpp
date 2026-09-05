// Last updated: 05/09/2026, 10:13:23
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;

            string doubled = s+s;

            return doubled.find(goal) != string::npos;
    }
};