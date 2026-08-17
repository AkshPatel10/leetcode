// Last updated: 17/08/2026, 09:29:18
class Solution {
public:
    bool judgeCircle(string moves) {
        int y = 0;
        int x = 0;

        for (char& ch : moves) {
            if (ch == 'U')
                y++;
            else if (ch == 'D')
                y--;
            else if (ch == 'R')
                x++;
            else if (ch == 'L')
                x--;
        }
        return x == 0 && y==0;
    }
};