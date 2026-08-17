// Last updated: 17/08/2026, 09:27:15
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prev = 0;
        int max = 0;

        for(int x: gain){
            prev += x;

            if(prev > max)
                max=prev;
        }
        return max;
    }
};