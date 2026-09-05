// Last updated: 05/09/2026, 10:07:43
class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int> freq(26, 0);
        string firstHalf = "";
        string middle = "";
        string secondHalf = "";

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {

            char ch = i + 'a';

            for (int k = 0; k < freq[i] / 2; k++) {
                firstHalf += ch;
            }
            if (freq[i] % 2 != 0) {
                middle += ch;
            }
        }

        secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());

        return firstHalf + middle + secondHalf;
    }
};