// Last updated: 05/09/2026, 10:10:54
class Solution {
public:
    bool checkOnesSegment(string s) {
        return s.find("01") == string::npos;
    }
};