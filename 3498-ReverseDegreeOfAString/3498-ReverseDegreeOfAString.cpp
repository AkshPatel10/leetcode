// Last updated: 04/10/2026, 16:42:59
class Solution {
public:
    int reverseDegree(string s) {
        int answer = 0;

        for(int i = 0; i < s.size(); i++){
            int value = 26 - (s[i] - 'a');
            answer += value * (i + 1);
        }

        return answer;
    }
};