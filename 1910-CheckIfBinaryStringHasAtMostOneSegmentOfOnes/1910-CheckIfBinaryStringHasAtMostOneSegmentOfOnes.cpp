// Last updated: 17/08/2026, 09:26:57
class Solution {
public:
    bool checkOnesSegment(string s) {
        return s.find("01") == string::npos;
    }
};