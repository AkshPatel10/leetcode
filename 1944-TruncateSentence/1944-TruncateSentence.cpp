// Last updated: 17/08/2026, 09:26:51
class Solution {
public:
    string truncateSentence(string s, int k) {
        int space = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                space++;
            }
            if(space == k){
                return s.substr(0,i);
            }
        }
        return s;
    }
};