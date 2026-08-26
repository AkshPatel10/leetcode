// Last updated: 26/08/2026, 10:19:45
class Solution {
public:
    int minimumLength(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right && s[left] == s[right]) {

            char ch = s[left];

            while (left <= right && s[left] == ch) {
                left++;
            }

            while (left <= right && s[right] == ch) {
                right--;
            }
        }
        return right-left+1;
    }
};