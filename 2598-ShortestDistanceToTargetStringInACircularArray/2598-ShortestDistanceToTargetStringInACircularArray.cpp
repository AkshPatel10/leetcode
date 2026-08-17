// Last updated: 17/08/2026, 09:25:39
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int res = INT_MAX;

        for(int i = 0; i < n; i++){
            if(words[i] == target){
               int straightDist = abs(i - startIndex);
               int circularDist = n - straightDist;

               res = min({res, straightDist, circularDist});
            }
        }

        return res == INT_MAX ? -1 : res;
    }
};