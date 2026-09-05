// Last updated: 05/09/2026, 10:12:08
class Solution {
public:
    int numSteps(string s) {
        int carry = 0;
        int steps = 0;

        for(int i = s.length() - 1; i > 0; i--){
            if((s[i] & 1) + carry == 1){
                steps += 2;
                carry = 1;
            }else{
                steps += 1;
            }
        }

        return carry + steps;
    }
};