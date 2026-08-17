// Last updated: 17/08/2026, 09:26:53
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