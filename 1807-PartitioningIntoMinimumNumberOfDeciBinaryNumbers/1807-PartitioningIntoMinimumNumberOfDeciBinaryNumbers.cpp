// Last updated: 17/08/2026, 09:27:21
class Solution {
public:
    int minPartitions(string n) {
        int count = 0;

        while (true) {
            bool changed = false;

            for (char &ch : n) {
                if (ch != '0') {
                    ch--;         
                    changed = true;
                }
            }

            if (!changed)
                break;

            count++;
        }

        return count;
    }
};