// Last updated: 17/08/2026, 09:25:59
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(), cost.end(), greater<int>());

        int total = 0;

        for(int i = 0; i < n; i++){
            if(i%3 != 2){
                total += cost[i];
            }
        }

        return total;
    }
};