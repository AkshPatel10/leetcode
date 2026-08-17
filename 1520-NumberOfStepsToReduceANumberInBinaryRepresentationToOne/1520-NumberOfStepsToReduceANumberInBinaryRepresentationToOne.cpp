// Last updated: 17/08/2026, 09:28:01
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