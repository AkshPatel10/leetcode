// Last updated: 05/09/2026, 10:12:49
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26,0);

        for(char ch : text){
            freq[ch - 'a']++;
        }

         return min({
            freq['b' - 'a'],
            freq['a' - 'a'],
            freq['l' - 'a'] / 2,
            freq['o' - 'a'] / 2,
            freq['n' - 'a']
        });
    }
};