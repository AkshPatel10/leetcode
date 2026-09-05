// Last updated: 05/09/2026, 10:10:55
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int j = 0;
        int i = 0;
        string res = "";

        while(i<word1.size() && j<word2.size()){
            res += word1[i++];
            res += word2[j++];
        }

        while(i<word1.size()){
            res += word1[i++];
        }

        while(j<word2.size()){
            res += word2[j++];
        }

        return res;
    }
};