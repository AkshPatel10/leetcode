// Last updated: 05/09/2026, 10:07:17
class Solution {
public:
    string processStr(string s) {
        string result = "";
        for (char ch : s) {
            if (ch == '#') {
                result += result;
            } 
            else if (ch == '%') {
                reverse(result.begin(), result.end());
            }
            else if(ch == '*'){
                if(!result.empty()){
                    result.pop_back();
                }
            }
            else{
                result += ch;
            }
        }
        return result;
    }
};