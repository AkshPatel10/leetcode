// Last updated: 17/08/2026, 09:22:39
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for(string word : words){
            int sum = 0;

            for(char ch : word){
                sum += weights[ch - 'a'];
            }

            int mod = sum % 26;

            char mapped = 'z' - mod;

            ans += mapped;
        }
        return ans;
    }
};