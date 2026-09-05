// Last updated: 05/09/2026, 10:11:15
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