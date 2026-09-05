// Last updated: 05/09/2026, 10:12:55
class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";

        for(char ch : address){
            if(ch == '.'){
                ans += "[.]";
            }
            else{
                ans += ch;
            }
        }
        return ans;
    }
};