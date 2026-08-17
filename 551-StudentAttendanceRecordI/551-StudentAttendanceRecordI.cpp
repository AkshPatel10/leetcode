// Last updated: 17/08/2026, 09:29:34
class Solution {
public:
    bool checkRecord(string s) {

        int absent = 0;
        int late = 0;

        for(char ch : s){

            if(ch == 'A'){
                absent++;
                if(absent >= 2) return false;
                late = 0; // reset L streak
            }
            else if(ch == 'L'){
                late++;
                if(late >= 3) return false;
            }
            else{
                late = 0; // 'P'
            }
        }

        return true;
    }
};