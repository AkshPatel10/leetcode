// Last updated: 05/09/2026, 10:10:51
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[0] - 'a' + 1;
        int y = coordinates[1];

        if((x+y) % 2 == 0){
            return false;
        }
        return true;
    }
};